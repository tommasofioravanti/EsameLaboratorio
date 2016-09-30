//
// Created by tommaso on 28/09/2016.
//

#ifndef ESAMELABORATORIO_OBSERVER_H
#define ESAMELABORATORIO_OBSERVER_H


class Observer {
public:

    virtual ~Observer() {}

    virtual void update()=0;


};


#endif //ESAMELABORATORIO_OBSERVER_H
