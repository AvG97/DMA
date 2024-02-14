/*
 * main.h
 *
 *  Created on: Jan 26, 2024
 *      Author: avish
 */

#ifndef MAIN_H_
#define MAIN_H_

#include<stdint.h>

#define UNUSED(X) (void)X

#define		SCB_BASE		(0xE000ED00UL)
#define		RCC_BASE		(0x40023800UL)
#define		GPIOA_BASE		(0x40020000UL)
#define		GPIOB_BASE		(0x40020400UL)
#define		GPIOC_BASE		(0x40020800UL)
#define		EXTI_BASE		(0x40013C00UL)
#define		SYSCFG_BASE		(0x40013800UL)
#define		NVIC_BASE		(0xE000E000UL)
#define		UART2_BASE		(0x40004400UL)
#define		DMA1_BASE		(0x40026000UL)

#define		CPACR			((volatile uint32_t *)(SCB_BASE + 0x88UL))
#define		RCC_AHB1ENR		((volatile uint32_t *)(RCC_BASE + 0x30UL))
#define		RCC_APB1ENR		((volatile uint32_t *)(RCC_BASE + 0x40UL))
#define		RCC_APB2ENR		((volatile uint32_t *)(RCC_BASE + 0x44UL))

#define		GPIOA_MODER		((volatile uint32_t *)(GPIOA_BASE))
#define		GPIOB_MODER		((volatile uint32_t *)(GPIOB_BASE))
#define		GPIOC_MODER		((volatile uint32_t *)(GPIOC_BASE))

#define		GPIOA_OSPEEDR	((volatile uint32_t *)(GPIOA_BASE + 0x08UL))

#define		GPIOA_IDR		((volatile uint32_t *)(GPIOA_BASE + 0x10UL))
#define		GPIOB_IDR		((volatile uint32_t *)(GPIOB_BASE + 0x10UL))
#define		GPIOC_IDR		((volatile uint32_t *)(GPIOC_BASE + 0x10UL))

#define		GPIOA_ODR		((volatile uint32_t *)(GPIOA_BASE + 0x14UL))
#define		GPIOB_ODR		((volatile uint32_t *)(GPIOB_BASE + 0x14UL))
#define		GPIOC_ODR		((volatile uint32_t *)(GPIOC_BASE + 0x14UL))

#define		GPIOA_BSRR		((volatile uint32_t *)(GPIOA_BASE + 0x18UL))
#define		GPIOB_BSRR		((volatile uint32_t *)(GPIOB_BASE + 0x18UL))
#define		GPIOC_BSRR		((volatile uint32_t *)(GPIOC_BASE + 0x18UL))

#define		GPIOA_AFRL		((volatile uint32_t *)(GPIOA_BASE + 0x20UL))
#define		GPIOA_AFRH		((volatile uint32_t *)(GPIOA_BASE + 0x24UL))

#define		EXTI_IMR		((volatile uint32_t *)(EXTI_BASE))
#define		EXTI_RTSR		((volatile uint32_t *)(EXTI_BASE + 0x08UL))
#define		EXTI_FTSR		((volatile uint32_t *)(EXTI_BASE + 0x0CUL))
#define		EXTI_PR			((volatile uint32_t *)(EXTI_BASE + 0x14UL))

#define		SYSCFG_EXTICR3	((volatile uint32_t *)(SYSCFG_BASE + 0x10UL))

#define		NVIC_ISER0		((volatile uint32_t *)(NVIC_BASE + 0x100UL))
#define		NVIC_ICER0		((volatile uint32_t *)(NVIC_BASE + 0x180UL))
#define		NVIC_ISER1		((volatile uint32_t *)(NVIC_BASE + 0x104UL))
#define		NVIC_ICER1		((volatile uint32_t *)(NVIC_BASE + 0x184UL))
#define		NVIC_IPR4		((volatile uint32_t *)(NVIC_BASE + 0x410UL))
#define		NVIC_IPR9		((volatile uint32_t *)(NVIC_BASE + 0x424UL))
#define		NVIC_IPR10		((volatile uint32_t *)(NVIC_BASE + 0x428UL))
#define		NVIC_ISPR0		((volatile uint32_t *)(NVIC_BASE + 0x200UL))
#define		NVIC_IABR0		((volatile uint32_t *)(NVIC_BASE + 0x300UL))
#define		NVIC_ISPR1		((volatile uint32_t *)(NVIC_BASE + 0x204UL))
#define		NVIC_IABR1		((volatile uint32_t *)(NVIC_BASE + 0x304UL))

#define		UART2_SR		((volatile uint32_t *)(UART2_BASE))
#define		UART2_DR		((volatile uint32_t *)(UART2_BASE + 0x04UL))
#define		UART2_BRR		((volatile uint32_t *)(UART2_BASE + 0x08UL))
#define		UART2_CR1		((volatile uint32_t *)(UART2_BASE + 0x0CUL))
#define		UART2_CR2		((volatile uint32_t *)(UART2_BASE + 0x10UL))
#define		UART2_CR3		((volatile uint32_t *)(UART2_BASE + 0x14UL))

#define		DMA1_LISR		((volatile uint32_t *)(DMA1_BASE))
#define		DMA1_HISR		((volatile uint32_t *)(DMA1_BASE + 0x04UL))
#define		DMA1_LIFCR		((volatile uint32_t *)(DMA1_BASE + 0x08UL))
#define		DMA1_HIFCR		((volatile uint32_t *)(DMA1_BASE + 0x0CUL))
#define		DMA1_S5CR		((volatile uint32_t *)(DMA1_BASE + 0x88UL))
#define		DMA1_S6CR		((volatile uint32_t *)(DMA1_BASE + 0xA0UL))
#define		DMA1_S5NDTR		((volatile uint32_t *)(DMA1_BASE + 0x8CUL))
#define		DMA1_S6NDTR		((volatile uint32_t *)(DMA1_BASE + 0xA4UL))
#define		DMA1_S5PAR		((volatile uint32_t *)(DMA1_BASE + 0x90UL))
#define		DMA1_S6PAR		((volatile uint32_t *)(DMA1_BASE + 0xA8UL))
#define		DMA1_S5M0AR		((volatile uint32_t *)(DMA1_BASE + 0x94UL))
#define		DMA1_S6M0AR		((volatile uint32_t *)(DMA1_BASE + 0xACUL))
#define		DMA1_S5M1AR		((volatile uint32_t *)(DMA1_BASE + 0x98UL))
#define		DMA1_S6M1AR		((volatile uint32_t *)(DMA1_BASE + 0xB0UL))
#define		DMA1_S5FCR		((volatile uint32_t *)(DMA1_BASE + 0x9CUL))
#define		DMA1_S6FCR		((volatile uint32_t *)(DMA1_BASE + 0xB4UL))

#endif /* MAIN_H_ */
