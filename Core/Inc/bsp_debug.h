/**
  ******************************************************************************
  * @file           : bsp_debug.h
  * @brief          : 调试输出头文件
  * @details        : 声明调试输出相关函数和宏定义
  * @author         : Becblue
  * @date           : 2025-03-15
  * @version        : V1.0
  ******************************************************************************
  */

/* 防止重复包含 */
#ifndef __BSP_DEBUG_H
#define __BSP_DEBUG_H

#ifdef __cplusplus
extern "C" {
#endif

/* 包含头文件 */
#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/* 宏定义 */
#define DEBUG_BUFFER_SIZE    256     // 调试缓冲区大小

/* 调试级别 */
#define DEBUG_LEVEL_NONE     0       // 无调试输出
#define DEBUG_LEVEL_ERROR    1       // 错误信息
#define DEBUG_LEVEL_WARN     2       // 警告信息
#define DEBUG_LEVEL_INFO     3       // 一般信息
#define DEBUG_LEVEL_DEBUG    4       // 调试信息
#define DEBUG_LEVEL_VERBOSE  5       // 详细信息

/* 当前调试级别 */
#define DEBUG_LEVEL          DEBUG_LEVEL_DEBUG

/* 调试输出宏 */
#if (DEBUG_LEVEL >= DEBUG_LEVEL_ERROR)
#define DEBUG_ERROR(format, ...)     DEBUG_Printf("[ERROR] " format "\r\n", ##__VA_ARGS__)
#else
#define DEBUG_ERROR(format, ...)
#endif

#if (DEBUG_LEVEL >= DEBUG_LEVEL_WARN)
#define DEBUG_WARN(format, ...)      DEBUG_Printf("[WARN] " format "\r\n", ##__VA_ARGS__)
#else
#define DEBUG_WARN(format, ...)
#endif

#if (DEBUG_LEVEL >= DEBUG_LEVEL_INFO)
#define DEBUG_INFO(format, ...)      DEBUG_Printf("[INFO] " format "\r\n", ##__VA_ARGS__)
#else
#define DEBUG_INFO(format, ...)
#endif

#if (DEBUG_LEVEL >= DEBUG_LEVEL_DEBUG)
#define DEBUG_DEBUG(format, ...)     DEBUG_Printf("[DEBUG] " format "\r\n", ##__VA_ARGS__)
#else
#define DEBUG_DEBUG(format, ...)
#endif

#if (DEBUG_LEVEL >= DEBUG_LEVEL_VERBOSE)
#define DEBUG_VERBOSE(format, ...)   DEBUG_Printf("[VERBOSE] " format "\r\n", ##__VA_ARGS__)
#else
#define DEBUG_VERBOSE(format, ...)
#endif

/* 导出变量声明 */
extern UART_HandleTypeDef huart5;

/* 导出函数声明 */
void DEBUG_Init(void);                               // 调试初始化
void DEBUG_Printf(const char *format, ...);          // 格式化输出
void DEBUG_SendData(uint8_t *pData, uint16_t size);  // 发送数据

#ifdef __cplusplus
}
#endif

#endif /* __BSP_DEBUG_H */ 

