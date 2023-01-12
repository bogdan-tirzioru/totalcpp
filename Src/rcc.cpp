/*
 * rcc.cpp
 *
 *  Created on: Jan 4, 2023
 *      Author: ghita
 */
#include "rcc.hpp"

void Rcc::Setup(void)
{
	/*select the clock source*/
	switch (selsourceclk)
	{
		case TypeRccSource::HSE:
			reg->CR |= RCC_CR_HSEON;
			break;
		case TypeRccSource::HSI:
			reg->CR |= RCC_CR_HSION;
		default:
			break;

	};
	/*setup the PLL1*/
	/*set the source HSE*/
	reg->PLLCKSELR |= RCC_PLLCKSELR_PLLSRC_HSE;
	/*select the divider for PLL1*/
	reg->PLLCKSELR &= ~RCC_PLLCKSELR_DIVM1;
	reg->PLLCKSELR |= RCC_PLLCKSELR_DIVM1_0;
	/*select the range to 8-16MHz*/
	reg->PLLCFGR |= RCC_PLLCFGR_PLL1RGE_3;
	/*wide range selected to 192 to 836 MHz*/
	reg->PLLCFGR &= ~RCC_PLLCFGR_PLL1VCOSEL;
	/*disable the fractional divider*/
	reg->PLLCFGR &= ~RCC_PLLCFGR_PLL1FRACEN;
	/*enable the P Q and R factor*/
	reg->PLLCFGR |= RCC_PLLCFGR_DIVP1EN;
	reg->PLLCFGR |= RCC_PLLCFGR_DIVQ1EN;
	reg->PLLCFGR |= RCC_PLLCFGR_DIVR1EN;

	/*set multiplier to 50 -> 400Mhz output*/
	reg->PLL1DIVR &= ~RCC_PLL1DIVR_N1;
	reg->PLL1DIVR |= (50-1) <<RCC_PLL1DIVR_N1_Pos;

	reg->PLL1DIVR &= ~RCC_PLL1DIVR_P1;
	reg->PLL1DIVR &= ~RCC_PLL1DIVR_Q1;
	reg->PLL1DIVR &= ~RCC_PLL1DIVR_R1;

	reg->CR |= RCC_CR_PLL1ON;
	while ((reg->CR & RCC_CR_PLL1RDY) != RCC_CR_PLL1RDY);

	/*select cpu to clock from PLL1*/
	reg->CFGR |= RCC_CFGR_SW_PLL1 << RCC_CFGR_SW_Pos;

}



