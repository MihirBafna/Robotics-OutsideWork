/*
 * smartMotor.h
 *
 *  Created on: Sep 22, 2018
 *      Author: MihirBafna
 */

#ifndef SMARTMOTOR_H_
#define SMARTMOTOR_H_
#include "Motor.h"


class smartMotor : public Motor {
public:
	int lastSpeed;

	double getLastSpeed();
	void setSpeed(double speed);

	smartMotor(int tempPort);
	virtual ~smartMotor();
};

#endif /* SMARTMOTOR_H_ */
