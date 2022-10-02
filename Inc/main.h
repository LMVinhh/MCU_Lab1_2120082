/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#define Led0_Pin GPIO_PIN_4
#define Led0_GPIO_Port GPIOA
#define Led1_Pin GPIO_PIN_5
#define Led1_GPIO_Port GPIOA
#define Led2_Pin GPIO_PIN_6
#define Led2_GPIO_Port GPIOA
#define Led3_Pin GPIO_PIN_7
#define Led3_GPIO_Port GPIOA
#define Led4_Pin GPIO_PIN_8
#define Led4_GPIO_Port GPIOA
#define Led5_Pin GPIO_PIN_9
#define Led5_GPIO_Port GPIOA
#define Led6_Pin GPIO_PIN_10
#define Led6_GPIO_Port GPIOA
#define Led7_Pin GPIO_PIN_11
#define Led7_GPIO_Port GPIOA
#define Led8_Pin GPIO_PIN_12
#define Led8_GPIO_Port GPIOA
#define Led9_Pin GPIO_PIN_13
#define Led9_GPIO_Port GPIOA
#define Led10_Pin GPIO_PIN_14
#define Led10_GPIO_Port GPIOA
#define Led11_Pin GPIO_PIN_15
#define Led11_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
