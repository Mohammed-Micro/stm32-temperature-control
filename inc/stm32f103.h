#include <stdint.h>

#ifndef __STM32F103__
#define __STM32F103__

#define PERIPH_BASE ((uint32_t)0x40000000)
#define TIM2_BASE   (PERIPH_BASE+(uint32_t)0x00000000)
#define TIM3_BASE   (PERIPH_BASE+(uint32_t)0x00000400)
#define TIM4_BASE   (PERIPH_BASE+(uint32_t)0x00000800)
#define TIM5_BASE   (PERIPH_BASE+(uint32_t)0x00000C00)
#define TIM6_BASE   (PERIPH_BASE+(uint32_t)0x00001000)
#define TIM7_BASE   (PERIPH_BASE+(uint32_t)0x00001400)
#define TIM12_BASE  (PERIPH_BASE+(uint32_t)0x00001800)
#define TIM13_BASE  (PERIPH_BASE+(uint32_t)0x00001C00)
#define TIM14_BASE  (PERIPH_BASE+(uint32_t)0x00002000)
#define GPIOA_BASE	(PERIPH_BASE+(uint32_t)0x00010800)
#define GPIOB_BASE	(PERIPH_BASE+(uint32_t)0x00010C00)
#define GPIOC_BASE	(PERIPH_BASE+(uint32_t)0x00011000)
#define GPIOD_BASE	(PERIPH_BASE+(uint32_t)0x00011400)
#define GPIOE_BASE	(PERIPH_BASE+(uint32_t)0x00011800)
#define GPIOF_BASE	(PERIPH_BASE+(uint32_t)0x00011C00)
#define GPIOG_BASE	(PERIPH_BASE+(uint32_t)0x00012000)
#define RCC_BASE    (PERIPH_BASE+(uint32_t)0x00021000)
#define NVIC_BASE	((uint32_t)0xE000E100)

typedef struct
{
	uint32_t CR1;
	uint32_t CR2;
	uint32_t SMCR;
	uint32_t DIER;
	uint32_t SR;
	uint32_t EGR;
	uint32_t CCMR1;
	uint32_t CCMR2;
	uint32_t CCER;
	uint32_t CNT;
	uint32_t PSC;
	uint32_t ARR;
	uint32_t RCR;
	uint32_t CCR1;
	uint32_t CCR2;
	uint32_t CCR3;
	uint32_t CCR4;
	uint32_t BDTR;
	uint32_t DCR;
	uint32_t DMAR;
} TIM_TypeDef;

typedef struct
{
	uint32_t CRL;
	uint32_t CRH;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t BRR;
	uint32_t LCKR;
} GPIO_TypeDef;

typedef struct
{
	uint32_t CR;
	uint32_t CFGR;
	uint32_t CIR;
	uint32_t APB2RSTR;
	uint32_t APB1RSTR;
	uint32_t AHBENR;
	uint32_t APB2ENR;
	uint32_t APB1ENR;
	uint32_t BDCR;
	uint32_t CSR;
} RCC_TypeDef;

typedef struct
{
	uint32_t ISER[3];
	uint32_t RESRVD1[29];
	uint32_t ICER[3];
	uint32_t RESRVD2[5];
	uint32_t ISPR[3];
	uint32_t RESRVD3[29];
	uint32_t ICPR[3];
	uint32_t RESRVD4[5];
	uint32_t IABR[3];
	uint32_t RESRVD5[61];
	uint8_t  IP[84];
	uint32_t RESRVD6[695];
	uint32_t STIR;
} NVIC_TypeDef;

#define TIM2  ((TIM_TypeDef *)  TIM2_BASE)
#define TIM3  ((TIM_TypeDef *)  TIM3_BASE)
#define TIM4  ((TIM_TypeDef *)  TIM4_BASE)
#define TIM5  ((TIM_TypeDef *)  TIM5_BASE)
#define TIM6  ((TIM_TypeDef *)  TIM6_BASE)
#define TIM7  ((TIM_TypeDef *)  TIM7_BASE)
#define TIM12 ((TIM_TypeDef *)  TIM12_BASE)
#define TIM13 ((TIM_TypeDef *)  TIM13_BASE)
#define TIM14 ((TIM_TypeDef *)  TIM14_BASE)

#define GPIOA ((GPIO_TypeDef *) GPIOA_BASE)
#define GPIOB ((GPIO_TypeDef *) GPIOB_BASE)
#define GPIOC ((GPIO_TypeDef *) GPIOC_BASE)
#define GPIOD ((GPIO_TypeDef *) GPIOD_BASE)
#define GPIOE ((GPIO_TypeDef *) GPIOE_BASE)
#define GPIOF ((GPIO_TypeDef *) GPIOF_BASE)
#define GPIOG ((GPIO_TypeDef *) GPIOG_BASE)

#define RCC   ((RCC_TypeDef *) RCC_BASE)

#define NVIC  ((NVIC_TypeDef *) NVIC_BASE)

#define RCC_APB2ENR_AFIOEN ((uint32_t) 0x00000001)
#define RCC_APB2ENR_IOPAEN ((uint32_t) 0x00000004)
#define RCC_APB2ENR_IOPBEN ((uint32_t) 0x00000008)
#define RCC_APB2ENR_IOPCEN ((uint32_t) 0x00000010)
#define RCC_APB2ENR_IOPDEN ((uint32_t) 0x00000020)
#define RCC_APB2ENR_IOPEEN ((uint32_t) 0x00000040)
#define RCC_APB2ENR_IOPFEN ((uint32_t) 0x00000080)
#define RCC_APB2ENR_IOPGEN ((uint32_t) 0x00000100)
#define RCC_APB2ENR_ADC1EN ((uint32_t) 0x00000200)
#define RCC_APB2ENR_ADC2EN ((uint32_t) 0x00000400)
#define RCC_APB2ENR_TIM1EN ((uint32_t) 0x00000800)
#define RCC_APB2ENR_SPI1EN ((uint32_t) 0x00001000)
#define RCC_APB2ENR_TIM8EN ((uint32_t) 0x00002000)
#define RCC_APB2ENR_USART1EN ((uint32_t) 0x00004000)
#define RCC_APB2ENR_ADC3EN ((uint32_t) 0x00008000)
#define RCC_APB2ENR_TIM9EN ((uint32_t) 0x00080000)
#define RCC_APB2ENR_TIM10EN ((uint32_t) 0x00100000)
#define RCC_APB2ENR_TIM11EN ((uint32_t) 0x00200000)

#define RCC_APB1ENR_TIM2EN ((uint32_t)0x00000001)
#define RCC_APB1ENR_TIM3EN ((uint32_t)0x00000002)
#define RCC_APB1ENR_TIM4EN ((uint32_t)0x00000004)
#define RCC_APB1ENR_TIM5EN ((uint32_t)0x00000008)
#define RCC_APB1ENR_TIM6EN ((uint32_t)0x00000010)
#define RCC_APB1ENR_TIM7EN ((uint32_t)0x00000020)
#define RCC_APB1ENR_TIM12EN ((uint32_t)0x00000040)
#define RCC_APB1ENR_TIM13EN ((uint32_t)0x00000080)
#define RCC_APB1ENR_TIM14EN ((uint32_t)0x00000100)
#define RCC_APB1ENR_WWDGEN ((uint32_t)0x00000800)
#define RCC_APB1ENR_SPI2EN ((uint32_t)0x00004000)
#define RCC_APB1ENR_SPI3EN ((uint32_t)0x00008000)
#define RCC_APB1ENR_USART2EN ((uint32_t)0x00020000)
#define RCC_APB1ENR_USART3EN ((uint32_t)0x00040000)
#define RCC_APB1ENR_USART4EN ((uint32_t)0x00080000)
#define RCC_APB1ENR_USART5EN ((uint32_t)0x00100000)
#define RCC_APB1ENR_I2C1EN ((uint32_t)0x00200000)
#define RCC_APB1ENR_I2C2EN ((uint32_t)0x00400000)
#define RCC_APB1ENR_USBEN ((uint32_t)0x00800000)
#define RCC_APB1ENR_CANEN ((uint32_t)0x02000000)
#define RCC_APB1ENR_BKPEN ((uint32_t)0x08000000)
#define RCC_APB1ENR_PWREN ((uint32_t)0x10000000)
#define RCC_APB1ENR_DACEN ((uint32_t)0x20000000)

#define TIM_CR1_CEN ((uint16_t)0x00000001)
#define TIM_CR1_UDIS ((uint16_t)0x00000002)
#define TIM_CR1_URS ((uint16_t)0x00000004)
#define TIM_CR1_OPM ((uint16_t)0x00000008)
#define TIM_CR1_DIR ((uint16_t)0x00000010)
#define TIM_CR1_CMS_0 ((uint16_t)0x00000020)
#define TIM_CR1_CMS_1 ((uint16_t)0x00000040)
#define TIM_CR1_ARPE ((uint16_t)0x00000080)
#define TIM_CR1_CKD_0 ((uint16_t)0x00000100)
#define TIM_CR1_CKD_1 ((uint16_t)0x00000200)

#define TIM_CCMR_CCS_0 ((uint16_t)0x00000001)
#define TIM_CCMR_CCS_1 ((uint16_t)0x00000002)
#define TIM_CCMR_ICPSC_0 ((uint16_t)0x00000004)
#define TIM_CCMR_ICPSC_1 ((uint16_t)0x00000008)
#define TIM_CCMR_OCFE ((uint16_t)0x00000004)
#define TIM_CCMR_OCPE ((uint16_t)0x00000008)
#define TIM_CCMR_ICF_0 ((uint16_t)0x00000010)
#define TIM_CCMR_ICF_1 ((uint16_t)0x00000020)
#define TIM_CCMR_ICF_2 ((uint16_t)0x00000040)
#define TIM_CCMR_ICF_3 ((uint16_t)0x00000080)
#define TIM_CCMR_OCM_0 ((uint16_t)0x00000010)
#define TIM_CCMR_OCM_1 ((uint16_t)0x00000020)
#define TIM_CCMR_OCM_2 ((uint16_t)0x00000040)
#define TIM_CCMR_OCCE ((uint16_t)0x00000080)

#define TIM_EGR_UG ((uint16_t)0x00000001)
#define TIM_EGR_CC1G ((uint16_t)0x00000002)
#define TIM_EGR_CC2G ((uint16_t)0x00000004)
#define TIM_EGR_CC3G ((uint16_t)0x00000008)
#define TIM_EGR_CC4G ((uint16_t)0x00000010)
#define TIM_EGR_TG ((uint16_t)0x00000040)

#define TIM_CCER_CC1E ((uint16_t)0x00000001)
#define TIM_CCER_CC1P ((uint16_t)0x00000002)
#define TIM_CCER_CC2E ((uint16_t)0x00000010)
#define TIM_CCER_CC2P ((uint16_t)0x00000020)
#define TIM_CCER_CC3E ((uint16_t)0x00000100)
#define TIM_CCER_CC3P ((uint16_t)0x00000200)
#define TIM_CCER_CC4E ((uint16_t)0x00001000)
#define TIM_CCER_CC4P ((uint16_t)0x00002000)

#define GPIO_CR_ANALOG_INPUT 0
#define GPIO_CR_10MHz_PP	 1
#define GPIO_CR_2MHz_PP		 2
#define GPIO_CR_50MHz_PP	 3
#define GPIO_CR_FLOATING_INPUT 4
#define GPIO_CR_10MHz_OD	   5
#define GPIO_CR_2MHz_OD	   6
#define GPIO_CR_50MHz_OD	   7
#define GPIO_CR_PUD_INPUT 8
#define GPIO_CR_10MHz_AF_PP	 9
#define GPIO_CR_2MHz_AF_PP	 10
#define GPIO_CR_50MHz_AF_PP	 11
#define GPIO_CR_10MHz_AF_OD	 13
#define GPIO_CR_2MHz_AF_OD	 14
#define GPIO_CR_50MHz_AF_OD	 15

#ifdef USEGPIODRIVER
#include "stm32f103_gpio.h"
#endif
#ifdef USETIMDRIVER
#include "stm32f103_tim.h"
#endif

#endif