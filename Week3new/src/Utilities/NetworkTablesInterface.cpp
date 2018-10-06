/*
 * NetworkTablesInterface.cpp
 *
 *  Created on: Oct 6, 2018
 *      Author: MihirBafna
 */

#include <Utilities/NetworkTablesInterface.h>

double NetworkTablesInterface::getNumberCV(){
	return nt::NetworkTableInstance::GetDefault().GetEntry("Entry Key").GetDouble(-1);
}

bool NetworkTablesInterface::getBoolCV(){
	return false;
}

int NetworkTablesInterface::getIntCV(){
	return 300;
}
