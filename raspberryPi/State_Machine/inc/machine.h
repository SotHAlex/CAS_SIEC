#ifndef MACHINE_H
#define MACHINE_H

#include <vector>
#include "state.h"
#include "transition.h"

class Machine{
private :
    int initialState;
    std::vector<State> stateLst;
    std::vector<Transition> transitionLst;

public :
    Machine(int init);
    ~Machine();

    void addState(State s);
    void addTransition(Transition t);

    void run();

};

#endif // MACHINE_H
