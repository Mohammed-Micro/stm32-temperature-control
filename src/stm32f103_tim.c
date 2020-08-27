#include "stm32f103_tim.h"

void tim_pwm_init(TIM_TypeDef *TIMx, uint8_t channel, uint64_t pwm_mode, uint32_t period_us, uint8_t duty_percent)
{
	TIMx->ARR = TIM_CK/1000000*period_us;
	volatile uint32_t *ccr = &(TIMx->CCR1);
	ccr += channel;
	*ccr= TIMx->ARR / 100 * duty_percent;
	volatile uint64_t *ccmr = (uint64_t *)&(TIMx->CCMR1);
	*ccmr|=pwm_mode << (channel*8);
	TIMx->EGR = TIM_EGR_UG;
	TIMx->CCER |= TIM_CCER_CC1E << (channel * 4);
	TIMx->CR1 |= TIM_CR1_CEN;
}