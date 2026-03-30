#ifndef __MAIN_H
#define __MAIN_H

#include "stm32f1xx_hal.h"

/* 自动适配：假设 LED 在 PC13 */
#define LED_PIN                GPIO_PIN_13
#define LED_GPIO_PORT          GPIOC

/* 函数声明 */
void SystemClock_Config(void);
void Error_Handler(void);

#endif