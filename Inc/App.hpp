/*
 * App.hpp
 *
 *  Created on: Dec 28, 2022
 *      Author: ghita
 */

#ifndef APP_HPP_
#define APP_HPP_
#include <device.hpp>
#include <stdint.h>
#include "dio.hpp"
#include "timer.hpp"
#include "can.hpp"

class App
{
	Dio *dio;
	Can *can1;
	Timer *timeros;
	Device * pDriver[3];


public:
	App(void){
			dio =new Dio{};
			can1 = new Can{};
			timeros = new Timer{};
			pDriver[0]= dynamic_cast<Device *>(dio);
			pDriver[1]=	dynamic_cast<Device *>(timeros);
			pDriver[2]=	dynamic_cast<Device *>(can1);
			for(auto &iter:pDriver)
			{
				iter->Setup();
			}
	};
	void Loop(void)
	{
		dio->Toggle(PortName::PB,0);
	}
	virtual ~App(void){
		delete dio;
		delete can1;
		delete timeros;
	};
};


#endif /* APP_HPP_ */
