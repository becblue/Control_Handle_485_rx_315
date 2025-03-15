/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define KEY11_Pin GPIO_PIN_13
#define KEY11_GPIO_Port GPIOC
#define KEY12_Pin GPIO_PIN_14
#define KEY12_GPIO_Port GPIOC
#define KEY13_Pin GPIO_PIN_15
#define KEY13_GPIO_Port GPIOC
#define LED10_Pin GPIO_PIN_0
#define LED10_GPIO_Port GPIOC
#define LED11_Pin GPIO_PIN_1
#define LED11_GPIO_Port GPIOC
#define LED12_Pin GPIO_PIN_2
#define LED12_GPIO_Port GPIOC
#define KEY1_Pin GPIO_PIN_3
#define KEY1_GPIO_Port GPIOC
#define LED1_Pin GPIO_PIN_0
#define LED1_GPIO_Port GPIOA
#define ADC0_Pin GPIO_PIN_1
#define ADC0_GPIO_Port GPIOA
#define ADC1_Pin GPIO_PIN_2
#define ADC1_GPIO_Port GPIOA
#define LED2_Pin GPIO_PIN_3
#define LED2_GPIO_Port GPIOA
#define LED3_Pin GPIO_PIN_4
#define LED3_GPIO_Port GPIOA
#define LED4_Pin GPIO_PIN_5
#define LED4_GPIO_Port GPIOA
#define LED5_Pin GPIO_PIN_6
#define LED5_GPIO_Port GPIOA
#define LED6_Pin GPIO_PIN_7
#define LED6_GPIO_Port GPIOA
#define KEY2_Pin GPIO_PIN_4
#define KEY2_GPIO_Port GPIOC
#define KEY3_Pin GPIO_PIN_5
#define KEY3_GPIO_Port GPIOC
#define KEY14_Pin GPIO_PIN_0
#define KEY14_GPIO_Port GPIOB
#define KEY15_Pin GPIO_PIN_1
#define KEY15_GPIO_Port GPIOB
#define KEY23_Pin GPIO_PIN_10
#define KEY23_GPIO_Port GPIOB
#define KEY24_Pin GPIO_PIN_11
#define KEY24_GPIO_Port GPIOB
#define LED_Pin GPIO_PIN_12
#define LED_GPIO_Port GPIOB
#define KEY4_Pin GPIO_PIN_6
#define KEY4_GPIO_Port GPIOC
#define KEY5_Pin GPIO_PIN_7
#define KEY5_GPIO_Port GPIOC
#define KEY6_Pin GPIO_PIN_8
#define KEY6_GPIO_Port GPIOC
#define KEY7_Pin GPIO_PIN_9
#define KEY7_GPIO_Port GPIOC
#define LED8_Pin GPIO_PIN_8
#define LED8_GPIO_Port GPIOA
#define RS485DE_Pin GPIO_PIN_11
#define RS485DE_GPIO_Port GPIOA
#define LED8A12_Pin GPIO_PIN_12
#define LED8A12_GPIO_Port GPIOA
#define LED9_Pin GPIO_PIN_15
#define LED9_GPIO_Port GPIOA
#define KEY8_Pin GPIO_PIN_10
#define KEY8_GPIO_Port GPIOC
#define KEY9_Pin GPIO_PIN_11
#define KEY9_GPIO_Port GPIOC
#define KEY10_Pin GPIO_PIN_12
#define KEY10_GPIO_Port GPIOC
#define KEY16_Pin GPIO_PIN_3
#define KEY16_GPIO_Port GPIOB
#define KEY17_Pin GPIO_PIN_4
#define KEY17_GPIO_Port GPIOB
#define KEY18_Pin GPIO_PIN_5
#define KEY18_GPIO_Port GPIOB
#define KEY19_Pin GPIO_PIN_6
#define KEY19_GPIO_Port GPIOB
#define KEY20_Pin GPIO_PIN_7
#define KEY20_GPIO_Port GPIOB
#define KEY21_Pin GPIO_PIN_8
#define KEY21_GPIO_Port GPIOB
#define KEY22_Pin GPIO_PIN_9
#define KEY22_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
