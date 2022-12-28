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
public:
	Rcc(TypeRccSource sourceclk,unsigned long value)
	{
		reg = RCC;

	}
	virtual void Setup(void)
	{

	}
	virtual ~Rcc(void)
	{

	}
};



#endif /* RCC_HPP_ */
