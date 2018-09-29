/*
 * Motor.h
 *
 *  Created on: Sep 17, 2018
 *      Author: MihirBafna
 */

#ifndef MOTOR_H_
#define MOTOR_H_

class Motor {
public:
	int portNumber;
	bool isReversed;
	double speed;

	void setSpeed(double _speed);

	void reverse();

	Motor(int __port);
	~Motor();
};


#endif /* MOTOR_H_ */
