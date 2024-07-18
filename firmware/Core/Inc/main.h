/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define FDCAN1_STB_Pin GPIO_PIN_13
#define FDCAN1_STB_GPIO_Port GPIOC
#define DACOUT_Pin GPIO_PIN_0
#define DACOUT_GPIO_Port GPIOA
#define NTC1_TEMP_Pin GPIO_PIN_1
#define NTC1_TEMP_GPIO_Port GPIOA
#define NTC2_TEMP_Pin GPIO_PIN_2
#define NTC2_TEMP_GPIO_Port GPIOA
#define SPI1_NSS_Pin GPIO_PIN_4
#define SPI1_NSS_GPIO_Port GPIOA
#define DRVOFF_Pin GPIO_PIN_1
#define DRVOFF_GPIO_Port GPIOB
#define FG_Pin GPIO_PIN_10
#define FG_GPIO_Port GPIOB
#define DIR_Pin GPIO_PIN_11
#define DIR_GPIO_Port GPIOB
#define MGL_Pin GPIO_PIN_12
#define MGL_GPIO_Port GPIOB
#define MGH_Pin GPIO_PIN_13
#define MGH_GPIO_Port GPIOB
#define BRAKE_Pin GPIO_PIN_14
#define BRAKE_GPIO_Port GPIOB
#define nFAULT_Pin GPIO_PIN_15
#define nFAULT_GPIO_Port GPIOB
#define SPEED_Pin GPIO_PIN_8
#define SPEED_GPIO_Port GPIOA
#define ENC_A_Pin GPIO_PIN_4
#define ENC_A_GPIO_Port GPIOB
#define ENC_B_Pin GPIO_PIN_5
#define ENC_B_GPIO_Port GPIOB
#define LED_DIN_Pin GPIO_PIN_7
#define LED_DIN_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
