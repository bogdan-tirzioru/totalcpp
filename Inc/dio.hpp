/*
 * dio.hpp
 *
 *  Created on: Dec 23, 2022
 *      Author: ghita
 */

#ifndef DIO_HPP_
#define DIO_HPP_

#include "driver.hpp"

class Dio:public Driver{
	bool value=false;
public:
	Dio(void){;};
	void Toggle(void){value= !value;};
	void Setup(void){;};
};



#endif /* DIO_HPP_ */
