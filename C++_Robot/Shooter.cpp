/*
 * Shooter.cpp
 *
 *  Created on: Sep 22, 2018
 *      Author: MihirBafna
 */

#include "Shooter.h"
#include "SmartMotor.h"
#include <iostream>
using namespace std;

void Shooter::shoot(){
	cout << "Shooting!" << endl;
	shooterMotor->setSpeed(1.0);
	shooterMotor->setSpeed(0.0);
}

Shooter::Shooter(int port) :shooterMotor()
{
}

Shooter::~Shooter() {
	// TODO Auto-generated destructor stub
}

