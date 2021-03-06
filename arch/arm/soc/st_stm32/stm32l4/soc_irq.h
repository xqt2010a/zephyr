/*
 * Copyright (c) 2016 Open-RnD Sp. z o.o.
 * Copyright (c) 2016 BayLibre, SAS
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _STM32L4_SOC_IRQ_H_
#define _STM32L4_SOC_IRQ_H_

/*
 * We cannot use the enum present in the ST headers for the IRQs because
 * of the IRQ_CONNECT macro. The macro exepects a number or a symbol that can
 * be processed by the preprocessor.
 */

#define STM32L4_IRQ_WWDG		0
#define STM32L4_IRQ_PVD		1
#define STM32L4_IRQ_TAMPER		2
#define STM32L4_IRQ_RTC		3
#define STM32L4_IRQ_FLASH		4
#define STM32L4_IRQ_RCC		5
#define STM32L4_IRQ_EXTI0		6
#define STM32L4_IRQ_EXTI1		7
#define STM32L4_IRQ_EXTI2		8
#define STM32L4_IRQ_EXTI3		9
#define STM32L4_IRQ_EXTI4		10
#define STM32L4_IRQ_DMA1_CH1		11
#define STM32L4_IRQ_DMA1_CH2		12
#define STM32L4_IRQ_DMA1_CH3		13
#define STM32L4_IRQ_DMA1_CH4		14
#define STM32L4_IRQ_DMA1_CH5		15
#define STM32L4_IRQ_DMA1_CH6		16
#define STM32L4_IRQ_DMA1_CH7		17
#define STM32L4_IRQ_ADC1_2		18
#define STM32L4_IRQ_CAN_TX		19
#define STM32L4_IRQ_CAN_RX0		20
#define STM32L4_IRQ_CAN_RX1		21
#define STM32L4_IRQ_CAN_SCE		22
#define STM32L4_IRQ_EXTI9_5		23
#define STM32L4_IRQ_TIM1_BRK		24
#define STM32L4_IRQ_TIM1_UP		25
#define STM32L4_IRQ_TIM1_TRG_COM	26
#define STM32L4_IRQ_TIM1_CC		27
#define STM32L4_IRQ_TIM2		28
#define STM32L4_IRQ_TIM3		29
#define STM32L4_IRQ_TIM4		30
#define STM32L4_IRQ_I2C1_EV		31
#define STM32L4_IRQ_I2C1_ER		32
#define STM32L4_IRQ_I2C2_EV		33
#define STM32L4_IRQ_I2C2_ER		34
#define STM32L4_IRQ_SPI1		35
#define STM32L4_IRQ_SPI2		36
#define STM32L4_IRQ_USART1		37
#define STM32L4_IRQ_USART2		38
#define STM32L4_IRQ_USART3		39
#define STM32L4_IRQ_EXTI15_10		40
#define STM32L4_IRQ_RTC_ALARM		41
#define STM32L4_IRQ_DFSDM1_FLT3	42
#define STM32L4_IRQ_TIM8_BRK		43
#define STM32L4_IRQ_TIM8_UP		44
#define STM32L4_IRQ_TIM8_TRG_COM	45
#define STM32L4_IRQ_TIM8_CC		46
#define STM32L4_IRQ_ADC3		47
#define STM32L4_IRQ_FSMC		48
#define STM32L4_IRQ_SDIO		49
#define STM32L4_IRQ_TIM5		50
#define STM32L4_IRQ_SPI3		51
#define STM32L4_IRQ_UART4		52
#define STM32L4_IRQ_UART5		53
#define STM32L4_IRQ_TIM6		54
#define STM32L4_IRQ_TIM7		55
#define STM32L4_IRQ_DMA2_CH1		56
#define STM32L4_IRQ_DMA2_CH2		57
#define STM32L4_IRQ_DMA2_CH3		58
#define STM32L4_IRQ_DMA2_CH4		59
#define STM32L4_IRQ_DMA2_CH5		60
#define STM32L4_IRQ_DFSDM1_FLT0	61
#define STM32L4_IRQ_DFSDM1_FLT1	62
#define STM32L4_IRQ_DFSDM1_FLT2	63
#define STM32L4_IRQ_COMP		64
#define STM32L4_IRQ_LPTIM1		65
#define STM32L4_IRQ_LPTIM2		66
#define STM32L4_IRQ_OTG_FS		67
#define STM32L4_IRQ_DMA2_CH6		68
#define STM32L4_IRQ_DMA2_CH7		69
#define STM32L4_IRQ_LPUART1		70
#define STM32L4_IRQ_QUADSPI		71
#define STM32L4_IRQ_I2C3_EV		72
#define STM32L4_IRQ_I2C3_ER		73
#define STM32L4_IRQ_SAI1		74
#define STM32L4_IRQ_SAI2		75
#define STM32L4_IRQ_SWPMI1		76
#define STM32L4_IRQ_TSC		77
#define STM32L4_IRQ_LCD		78
#define STM32L4_IRQ_AES		79
#define STM32L4_IRQ_RNG		80
#define STM32L4_IRQ_FPU		81
#define STM32L4_IRQ_CRS		82

#endif	/* _STM32L4_SOC_IRQ_H_ */
