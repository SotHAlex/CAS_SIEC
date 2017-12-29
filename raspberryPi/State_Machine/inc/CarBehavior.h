#ifndef CARBEHAVIOR_H
#define CARBEHAVIOR_H

#include "machine.h"
#include "bluetooth_communication.h"

class CarBehavior{
	
public : 
	static Machine createCarBehaviorStateMachine(BluetoothServer * btServer);

	static void task2();
};

#endif