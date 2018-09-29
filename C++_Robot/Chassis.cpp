/*
 * Chassis.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: MihirBafna
 */

#include "Chassis.h"
#include "Motor.h"
#include <iostream>

using namespace std;

void Chassis::moveStraight(double speed){
	leftWheels->setSpeed(speed);
	rightWheels->setSpeed(speed);
}

void Chassis::pointTurn(double speed){
	leftWheels->setSpeed(speed);
	rightWheels->setSpeed(0-speed);
}

void Chassis::brake(){
	leftWheels->setSpeed(0);
	rightWheels->setSpeed(0);
}

void Chassis::wait(int duration){
	cout << "Waiting for "<< duration/1000 << " seconds" << endl;
}

Chassis::Chassis(int port1, int port2) : leftWheels(new Motor(port1)), rightWheels(new Motor(port2)) {

	rightWheels->reverse();
}

Chassis::~Chassis() {
	// TODO Auto-generated destructor stub
}

