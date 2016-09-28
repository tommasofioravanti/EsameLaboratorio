//
// Created by tommaso on 28/09/2016.
//

#ifndef ESAMELABORATORIO_OBSERVER_H
#define ESAMELABORATORIO_OBSERVER_H


#include "Subject.h"

class Observer {
public:

    virtual void update()=0;
    virtual void addCell(Subject* s)=0;
    virtual void removeCell(Subject* s)=0;

};


#endif //ESAMELABORATORIO_OBSERVER_H
