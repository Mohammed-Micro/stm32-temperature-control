#ifndef __STM32F103_TIM__
#define __STM32F103_TIM__

#include "stm32f103.h"

#define TIM_CC_CH1 0
#define TIM_CC_CH2 1
#define TIM_CC_CH3 2
#define TIM_CC_CH4 3

#define TIM_OCM_PWM_MD_1 0x0000000000000060
#define TIM_OCM_PWM_MD_2 0x0000000000000070
#define TIM_CK 8000000
void tim_pwm_init(TIM_TypeDef *TIMx, uint8_t channel, uint64_t pwm_mode, uint32_t period_us, uint8_t duty_percent);

#endif