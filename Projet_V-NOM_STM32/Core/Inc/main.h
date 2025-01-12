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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define BTN_START_Pin GPIO_PIN_13
#define BTN_START_GPIO_Port GPIOC
#define ToF2_Pin GPIO_PIN_0
#define ToF2_GPIO_Port GPIOA
#define AG_INT1_Pin GPIO_PIN_3
#define AG_INT1_GPIO_Port GPIOA
#define AG_INT2_Pin GPIO_PIN_4
#define AG_INT2_GPIO_Port GPIOA
#define SPI1_CSN_Pin GPIO_PIN_4
#define SPI1_CSN_GPIO_Port GPIOC
#define LED_RED_Pin GPIO_PIN_0
#define LED_RED_GPIO_Port GPIOB
#define LED_GREEN_Pin GPIO_PIN_1
#define LED_GREEN_GPIO_Port GPIOB
#define LIDAR_RX_Pin GPIO_PIN_15
#define LIDAR_RX_GPIO_Port GPIOA
#define EN_LIDAR_Pin GPIO_PIN_10
#define EN_LIDAR_GPIO_Port GPIOC
#define EN_MOT_Pin GPIO_PIN_11
#define EN_MOT_GPIO_Port GPIOC
#define LIDAR_TX_Pin GPIO_PIN_3
#define LIDAR_TX_GPIO_Port GPIOB
#define VCP_TX_Pin GPIO_PIN_6
#define VCP_TX_GPIO_Port GPIOB
#define VCP_RX_Pin GPIO_PIN_7
#define VCP_RX_GPIO_Port GPIOB
#define BTN_MODE_Pin GPIO_PIN_9
#define BTN_MODE_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
