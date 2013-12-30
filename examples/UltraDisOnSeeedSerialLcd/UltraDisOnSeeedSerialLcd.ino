/***************************************************************************/	
//  Function: Measure the distance to obstacles in front and display the 
//			  result on seeedstudio serialLcd. Make sure you installed the 
//			  serialLCD, SofewareSerial and Ultrasonic library.	  
//	Hardware: Grove - Ultrasonic Ranger, Grove - Serial LCD
//	Arduino IDE: Arduino-1.0
//	Author:	 LG		
//	Date: 	 Jan 17,2013
//	Version: v1.0 modified by FrankieChu
//	by www.seeedstudio.com
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
//
/*****************************************************************************/


#include <SoftwareSerial.h>
#include <SerialLCD.h>
#include "Ultrasonic.h"

SerialLCD slcd(4,5);
Ultrasonic ultrasonic(7);
void setup()
{
   slcd.begin();
}
void loop()
{
	long RangeInCentimeters;
	RangeInCentimeters = ultrasonic.MeasureInCentimeters();
	delay(150);
	slcd.clear();
	slcd.setCursor(0,0);
	slcd.print("The distance:");
	slcd.setCursor(0,1) ;
	slcd.print(RangeInCentimeters,DEC);
	slcd.setCursor(5,1) ;  
	slcd.print("cm");
}
   
