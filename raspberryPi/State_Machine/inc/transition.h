#ifndef TRANSITION_H
#define TRANSITION_H

class Transition{
private :
    int srcId;
    int destId;

public :
    int(*valuationFunction)(void);

    Transition(int src, int dest, int (*f)());
    ~Transition();

    int getSrc();
    int getDest();

};

#endif // TRANSITION_H
