#ifndef STATE_H
#define STATE_H

#include <string>
#include "bluetooth_communication.h"

class State
{
private :
    int id;
    std::string name;
	BluetoothServer * server;

public :
    static int counter_id;
    int(*executedFunction)(void);

    State(std::string n, BluetoothServer* serv,int(*f)());

    ~State();

    int getId();
    std::string getName();
	
	void run();

};

#endif // STATE_H
