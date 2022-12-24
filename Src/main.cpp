/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */
#include <device.hpp>
#include <stdint.h>
#include "dio.hpp"
#include "timer.hpp"
#include "can.hpp"
using portname;

int main(void)
{
    /* Loop forever */
	Dio *dio =new Dio{};
	Can *can1 = new Can{};
	Timer *timeros = new Timer{};
	Device * pDriver[]={ dynamic_cast<Device *>(dio),
			dynamic_cast<Device *>(timeros),
			dynamic_cast<Device *>(can1)};
	for(auto &iter:pDriver)
	{
		iter->Setup();
	}
	for(;;)
		{
			dio->Toggle(PB,0);
		};
}
