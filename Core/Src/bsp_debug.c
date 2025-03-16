/**
  ******************************************************************************
  * @file           : bsp_debug.c
  * @brief          : �������Դ�ļ�
  * @details        : ʵ�ֵ����������
  * @author         : Becblue
  * @date           : 2025-03-15
  * @version        : V1.0
  ******************************************************************************
  */

/* ����ͷ�ļ� */
#include "bsp_debug.h"

/* ȫ�ֱ������� */
extern UART_HandleTypeDef huart5;                    // UART5������ⲿ������
static uint8_t debugBuffer[DEBUG_BUFFER_SIZE];       // ���Ի�����

/**
  * @brief  ���Գ�ʼ������
  * @param  ��
  * @retval ��
  */
void DEBUG_Init(void)
{
  /* �����ʼ����Ϣ */
  DEBUG_Printf("\r\n\r\n===== ���������ʼ����� =====\r\n");
  DEBUG_Printf("ϵͳʱ��: %d MHz\r\n", SystemCoreClock / 1000000);
}

/**
  * @brief  ��ʽ���������
  * @param  format: ��ʽ���ַ���
  * @param  ...: �ɱ����
  * @retval ��
  */
void DEBUG_Printf(const char *format, ...)
{
  va_list args;
  uint16_t length;
  
  /* ��ʽ���ַ��� */
  va_start(args, format);
  length = vsnprintf((char *)debugBuffer, DEBUG_BUFFER_SIZE, format, args);
  va_end(args);
  
  /* �������� */
  DEBUG_SendData(debugBuffer, length);
}

/**
  * @brief  �������ݺ���
  * @param  pData: ����ָ��
  * @param  size: ���ݴ�С
  * @retval ��
  */
void DEBUG_SendData(uint8_t *pData, uint16_t size)
{
  /* �������� */
  HAL_UART_Transmit(&huart5, pData, size, 100);
  
  /* �ȴ�������� */
  while(__HAL_UART_GET_FLAG(&huart5, UART_FLAG_TC) == RESET);
}

/**
  * @brief  �ض���printf����
  * @param  ch: �ַ�
  * @param  f: �ļ�ָ��
  * @retval �ַ�
  */
int fputc(int ch, FILE *f)
{
  /* ���͵����ַ� */
  HAL_UART_Transmit(&huart5, (uint8_t *)&ch, 1, 10);
  
  return ch;
}

