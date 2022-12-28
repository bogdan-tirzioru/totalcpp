/*
 * rcc.hpp
 *
 *  Created on: Dec 28, 2022
 *      Author: ghita
 */

#ifndef RCC_HPP_
#define RCC_HPP_

#include "device.hpp"
enum class TypeRccSource { HSE,HSI};
class Rcc : public Device
{
	RCC_TypeDef *reg;
	TypeRccSource selsourceclk;
public:
	Rcc(TypeRccSource sourceclk,unsigned long value)
	{
		selsourceclk = sourceclk;
		reg = RCC;
	}
	virtual void Setup(void)
	{
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


	}
	virtual ~Rcc(void)
	{

	}
};



#endif /* RCC_HPP_ */
