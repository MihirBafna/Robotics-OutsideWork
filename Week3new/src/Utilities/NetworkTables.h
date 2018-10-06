/*
 * NetworkTables.h
 *
 *  Created on: Oct 6, 2018
 *      Author: MihirBafna
 */

#ifndef SRC_UTILITIES_NETWORKTABLES_H_
#define SRC_UTILITIES_NETWORKTABLES_H_
#include <NetworkTables/NetworkTableInstance.h>

class NetworkTables {
public:
	static double getNumberCV;
	static bool getBoolCV;
	static int getIntCV;
	NetworkTables();
	virtual ~NetworkTables();
};

#endif /* SRC_UTILITIES_NETWORKTABLES_H_ */

/*
 * NetworkTablesInterface.h
 *
 *  Created on: Oct 6, 2018
 *      Author: MihirBafna
 */

