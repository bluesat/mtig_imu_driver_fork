/**
 * @file serialkey.cpp
 * @brief Used to validate the serial key of your device
 * @details This file is a part of the Xsens API and used to validate
 *          your device. You can either insert your serial key here or
 *          in serialkey.h
 */

/* 
   @copyright 
     Copyright (c) Xsens Technologies B.V., 2006-2012. All rights reserved.
 
      This source code is provided under the MT SDK Software License Agreement 
       and is intended for use only by Xsens Technologies BV and
       those that have explicit written permission to use it from
       Xsens Technologies BV.
 
      THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
       KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
       IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
       PARTICULAR PURPOSE.
 */

#include "serialkey.h"
#include <xsens/xsstring.h>
#include <xsens/xscontrol.h>
#include <stdio.h>
#include <iostream>

#define SERIAL_KEY_SIZE	30

extern "C"
int setSerialKey()
{
	return true;
}

