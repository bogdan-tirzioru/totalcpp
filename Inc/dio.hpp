/*
 * dio.hpp
 *
 *  Created on: Dec 23, 2022
 *      Author: ghita
 */

#ifndef DIO_HPP_
#define DIO_HPP_

#include "driver.hpp"
class Pin{
public:
	Pin(){;};
};
class Port{
	const unsigned char DataPortWidth = 32;
	Pin data[DataPortWidth];
public:
	Port(){;};
};

class Dio:public Driver{
	bool value=false;
	Port PA;
	Port PB;
	Port PC;
	Port PD;
	Port PE;
	Port PF;
	Port PG;

public:
	Dio(void){;};
	void Toggle(void){value= !value;};
	void Setup(void){;};
};



#endif /* DIO_HPP_ */
