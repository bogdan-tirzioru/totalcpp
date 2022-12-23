/*
 * driver.hpp
 *
 *  Created on: Dec 23, 2022
 *      Author: ghita
 */

#ifndef DRIVER_HPP_
#define DRIVER_HPP_
#include "stm32h750xx.h"
class Driver{
public:
	virtual void Setup(void)=0;
};



#endif /* DRIVER_HPP_ */
