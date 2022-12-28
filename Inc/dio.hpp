/*
 * dio.hpp
 *
 *  Created on: Dec 23, 2022
 *      Author: ghita
 */

#ifndef DIO_HPP_
#define DIO_HPP_

#include <device.hpp>



enum class PortName{ PA, PB};

class Pin: public Device{
public:
	Pin(){;};
	void Setup(void)
	{
		// do something
	}
};

class Port: public Device{
	constexpr static unsigned char DataPortWidth = 32;
	Pin data[DataPortWidth];
	GPIO_TypeDef *reg ;
public:
	Port(GPIO_TypeDef *p){reg = p;};
	void Setup(void)
	{
		for( auto iter:data)
		{
			iter.Setup();
		}
	}
};


class Dio:public Device{
	bool value=false;

	Port list[2] = {Port{GPIOA},Port{GPIOB}};
public:

public:
	Dio(void){;};
	void Toggle(PortName pm,unsigned char nrpin){value= !value;};
	void Setup(void){;};
};



#endif /* DIO_HPP_ */
