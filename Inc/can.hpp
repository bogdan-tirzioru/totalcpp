/*
 * can.hpp
 *
 *  Created on: Dec 23, 2022
 *      Author: ghita
 */

#ifndef CAN_HPP_
#define CAN_HPP_
#include <device.hpp>
class Can: public Device{
public:
	Can(void){;};
	virtual void Setup(void){;};
	virtual ~Can(void)
	{

	}
};




#endif /* CAN_HPP_ */
