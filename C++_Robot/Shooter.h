/*
 * Shooter.h
 *
 *  Created on: Sep 22, 2018
 *      Author: MihirBafna
 */

#ifndef SHOOTER_H_
#define SHOOTER_H_
#include "SmartMotor.h"

class Shooter {
private:
	smartMotor* shooterMotor;
public:
	void shoot();

	Shooter(int port);
	virtual ~Shooter();
};

#endif /* SHOOTER_H_ */
