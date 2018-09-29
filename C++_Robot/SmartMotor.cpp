/*
 * smartMotor.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: MihirBafna
 */

#include "SmartMotor.h"

void smartMotor::setSpeed(double speed){
	Motor::setSpeed(speed);
	lastSpeed = speed;
}

double smartMotor::getLastSpeed(){
	return lastSpeed;
}

smartMotor::smartMotor(int tempPort) : Motor(tempPort){
	lastSpeed = 0;
}

smartMotor::~smartMotor() {
}

