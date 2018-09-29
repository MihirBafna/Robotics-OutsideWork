/*
 * Chassis.h
 *
 *  Created on: Sep 22, 2018
 *      Author: MihirBafna
 */

#ifndef CHASSIS_H_
#define CHASSIS_H_
#include "Motor.h"

class Chassis {
private:
	Motor* leftWheels;
	Motor* rightWheels;

public:
	void moveStraight(double speed);

	void pointTurn(double speed);

	void brake();

	void wait(int duration);

	Chassis(int port1, int port2);
	virtual ~Chassis();

};

#endif /* CHASSIS_H_ */
