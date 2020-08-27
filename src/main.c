#include "stm32f103.h"

int main(void)
{	
	RCC->APB2ENR |= RCC_APB2ENR_IOPAEN;
	RCC->APB1ENR |= RCC_APB1ENR_TIM2EN;
	GPIO_PinMode(GPIOA,0,GPIO_CR_50MHz_AF_PP);
	tim_pwm_init(TIM2, TIM_CC_CH1, TIM_OCM_PWM_MD_1, 500, 25);
	while (1)
	{
	}
}
