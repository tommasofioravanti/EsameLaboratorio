//
// Created by tommaso on 28/09/2016.
//

#ifndef ESAMELABORATORIO_CELL_H
#define ESAMELABORATORIO_CELL_H


#include "Subject.h"
#include <list>

class Cell: public Subject {
public:
    explicit Cell(float v=0.);
    float getValue()const ;
    void setValue(float v);

    virtual ~Cell();

    virtual void notify()override ;
    virtual void subscribe(Observer*o)override ;
    virtual void unsubscribe(Observer*o)override ;

protected:
    float value;
    std::list<Observer*>observers;

};


#endif //ESAMELABORATORIO_CELL_H
