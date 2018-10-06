/*
 * NetworkTablesInterface.h
 *
 *  Created on: Oct 6, 2018
 *      Author: MihirBafna
 */

#ifndef SRC_UTILITIES_NETWORKTABLESINTERFACE_H_
#define SRC_UTILITIES_NETWORKTABLESINTERFACE_H_
#include <NetworkTables/NetworkTableInstance.h>

class NetworkTablesInterface {
public:
	static double getNumberCV;
	static bool getBoolCV;
	static int getIntCV;
};

#endif /* SRC_UTILITIES_NETWORKTABLESINTERFACE_H_ */
