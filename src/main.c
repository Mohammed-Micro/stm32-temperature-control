#include "stm32f103.h"

int main(void)
{

	RCC->APB2ENR |= RCC_APB2ENR_IOPAEN | RCC_APB2ENR_AFIOEN;
	GPIO_PinMode(GPIOA,1,GPIO_CR_10MHz_PP);
	
	while (1)
	{
		GPIO_ToggleBit(GPIOA,1);
	}
}

void TIM2_IRQHandler(void)
{
	GPIOA->ODR ^= 2;
	TIM2->SR=0;
}