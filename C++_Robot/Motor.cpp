/*
 * Motor.cpp
 *
 *  Created on: Sep 17, 2018
 *      Author: MihirBafna
 */

#include "Motor.h"
#include <cstdlib>
#include <string>
#include <iostream>
#include "Chassis.h"

using namespace std;



void Motor::reverse(){
	isReversed = !isReversed;
}

void Motor::setSpeed(double _speed){
	if(isReversed){
		_speed *= -1;
	}
	speed = _speed;
	cout << "Motor @ port " << portNumber << ", setting speed to " << speed << endl;
}

Motor::Motor(int _port)
	: portNumber(_port), isReversed(false), speed(0)
{

}

Motor::~Motor() {
	// TODO Auto-generated destructor stub
}

