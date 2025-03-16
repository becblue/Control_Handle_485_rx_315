/**
  ******************************************************************************
  * @file           : bsp_debug.h
  * @brief          : �������ͷ�ļ�
  * @details        : �������������غ����ͺ궨��
  * @author         : Becblue
  * @date           : 2025-03-15
  * @version        : V1.0
  ******************************************************************************
  */

/* ��ֹ�ظ����� */
#ifndef __BSP_DEBUG_H
#define __BSP_DEBUG_H

#ifdef __cplusplus
extern "C" {
#endif

/* ����ͷ�ļ� */
#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/* �궨�� */
#define DEBUG_BUFFER_SIZE    256     // ���Ի�������С

/* ���Լ��� */
#define DEBUG_LEVEL_NONE     0       // �޵������
#define DEBUG_LEVEL_ERROR    1       // ������Ϣ
#define DEBUG_LEVEL_WARN     2       // ������Ϣ
#define DEBUG_LEVEL_INFO     3       // һ����Ϣ
#define DEBUG_LEVEL_DEBUG    4       // ������Ϣ
#define DEBUG_LEVEL_VERBOSE  5       // ��ϸ��Ϣ

/* ��ǰ���Լ��� */
#define DEBUG_LEVEL          DEBUG_LEVEL_DEBUG

/* ��������� */
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

/* ������������ */
extern UART_HandleTypeDef huart5;

/* ������������ */
void DEBUG_Init(void);                               // ���Գ�ʼ��
void DEBUG_Printf(const char *format, ...);          // ��ʽ�����
void DEBUG_SendData(uint8_t *pData, uint16_t size);  // ��������

#ifdef __cplusplus
}
#endif

#endif /* __BSP_DEBUG_H */ 

