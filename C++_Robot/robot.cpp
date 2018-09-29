/*
 * robot.cpp
 *
 *  Created on: Sep 15, 2018
 *      Author: MihirBafna
 */
#include <iostream>
#include <vector>
#include <fstream>
#include "Motor.h"
#include "Chassis.h"
#include "Shooter.h"
#include "SmartMotor.h"

using namespace std;

int main(){
	//initialization
	Chassis* finalChassis = new Chassis(3,4);
	Shooter* finalShooter = new Shooter(6);

	finalChassis->moveStraight(1.0);
	finalChassis->wait(3000);
	finalChassis->pointTurn(-0.6);
	finalChassis->wait(500);
	finalChassis->brake();
	finalShooter->shoot();

    return 0;

}
