//
// Created by tommaso on 30/09/2016.
//

#ifndef ESAMELABORATORIO_MAX_H
#define ESAMELABORATORIO_MAX_H


#include "Formula.h"

class Max : public Formula{
public:
    Max(Cell* ptr):Formula(ptr){}
    virtual void calc()override ;

};


#endif //ESAMELABORATORIO_MAX_H
