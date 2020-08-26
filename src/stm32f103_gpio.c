#include "stm32f103_gpio.h"

void GPIO_PinMode(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin, uint8_t mode)
{
	volatile uint64_t *cr = (uint64_t *)GPIOx;
	*cr  &= ~(0xf << (4*GPIO_Pin));
	*cr  |= mode << (4*GPIO_Pin);
}

uint32_t GPIO_ReadPort(GPIO_TypeDef *GPIOx)
{
	return GPIOx->ODR;
}

void GPIO_WritePort(GPIO_TypeDef *GPIOx, uint16_t data)
{
	GPIOx->ODR = data;
}

uint8_t GPIO_ReadBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin)
{
	return GPIOx->ODR & (1<<GPIO_Pin) != 0;
}

void GPIO_WriteBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin, uint8_t value)
{
	if (!value) GPIOx->BRR = 1<<GPIO_Pin;
	else GPIOx->BSRR = 1<<GPIO_Pin;
}

void GPIO_SetBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin)
{
	GPIOx->BSRR = 1<<GPIO_Pin;
}

void GPIO_ClearBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin)
{
	GPIOx->BRR = 1<<GPIO_Pin;
}

void GPIO_ToggleBit(GPIO_TypeDef *GPIOx, uint8_t GPIO_Pin)
{
	GPIOx->ODR ^= (1<<GPIO_Pin);
}