/**
  ******************************************************************************
  * @file           : bsp_debug.c
  * @brief          : 调试输出源文件
  * @details        : 实现调试输出功能
  * @author         : Becblue
  * @date           : 2025-03-15
  * @version        : V1.0
  ******************************************************************************
  */

/* 包含头文件 */
#include "bsp_debug.h"

/* 全局变量定义 */
extern UART_HandleTypeDef huart5;                    // UART5句柄（外部声明）
static uint8_t debugBuffer[DEBUG_BUFFER_SIZE];       // 调试缓冲区

/**
  * @brief  调试初始化函数
  * @param  无
  * @retval 无
  */
void DEBUG_Init(void)
{
  /* 输出初始化信息 */
  DEBUG_Printf("\r\n\r\n===== 调试输出初始化完成 =====\r\n");
  DEBUG_Printf("系统时钟: %d MHz\r\n", SystemCoreClock / 1000000);
}

/**
  * @brief  格式化输出函数
  * @param  format: 格式化字符串
  * @param  ...: 可变参数
  * @retval 无
  */
void DEBUG_Printf(const char *format, ...)
{
  va_list args;
  uint16_t length;
  
  /* 格式化字符串 */
  va_start(args, format);
  length = vsnprintf((char *)debugBuffer, DEBUG_BUFFER_SIZE, format, args);
  va_end(args);
  
  /* 发送数据 */
  DEBUG_SendData(debugBuffer, length);
}

/**
  * @brief  发送数据函数
  * @param  pData: 数据指针
  * @param  size: 数据大小
  * @retval 无
  */
void DEBUG_SendData(uint8_t *pData, uint16_t size)
{
  /* 发送数据 */
  HAL_UART_Transmit(&huart5, pData, size, 100);
  
  /* 等待发送完成 */
  while(__HAL_UART_GET_FLAG(&huart5, UART_FLAG_TC) == RESET);
}

/**
  * @brief  重定向printf函数
  * @param  ch: 字符
  * @param  f: 文件指针
  * @retval 字符
  */
int fputc(int ch, FILE *f)
{
  /* 发送单个字符 */
  HAL_UART_Transmit(&huart5, (uint8_t *)&ch, 1, 10);
  
  return ch;
}

