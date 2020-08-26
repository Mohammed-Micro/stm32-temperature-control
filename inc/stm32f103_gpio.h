#ifndef __STM32F103_GPIO__
#define __STM32F103_GPIO__

#include "stm32f103.h"

void GPIO_PinMode(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin, uint8_t mode);
uint32_t GPIO_ReadPort(GPIO_TypeDef *GPIOx);
void GPIO_WritePort(GPIO_TypeDef *GPIOx, uint16_t data);
uint8_t GPIO_ReadBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin);
void GPIO_WriteBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin, uint8_t value);
void GPIO_SetBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin);
void GPIO_ClearBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin);
void GPIO_ToggleBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin);

#endif