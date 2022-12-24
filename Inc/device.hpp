/*
 * driver.hpp
 *
 *  Created on: Dec 23, 2022
 *      Author: ghita
 */

#ifndef DEVICE_HPP_
#define DEVICE_HPP_
#include "stm32h750xx.h"
class Device{
public:
	virtual void Setup(void)=0;
};



#endif /* DEVICE_HPP_ */
