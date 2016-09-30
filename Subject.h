//
// Created by tommaso on 28/09/2016.
//

#ifndef ESAMELABORATORIO_SUBJECT_H
#define ESAMELABORATORIO_SUBJECT_H

#include "Observer.h"
class Subject {
public:
    virtual ~Subject() {}
    virtual void notify()=0;
    virtual void subscribe(Observer* o)=0;
    virtual void unsubscribe(Observer*o)=0;



};


#endif //ESAMELABORATORIO_SUBJECT_H
