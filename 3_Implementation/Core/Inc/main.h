#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif


#include "stm32f0xx_hal.h"


void Error_Handler(void);

#define B1_Pin GPIO_PIN_0
#define B1_GPIO_Port GPIOA
#define LD4_Pin GPIO_PIN_8
#define LD4_GPIO_Port GPIOC
#define LD3_Pin GPIO_PIN_9
#define LD3_GPIO_Port GPIOC
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA


#ifdef __cplusplus
}
#endif

#endif 
