//
// Created by tommaso on 30/09/2016.
//

#ifndef ESAMELABORATORIO_MIN_H
#define ESAMELABORATORIO_MIN_H


#include "Formula.h"

class Min : public Formula{
public:
    Min(Cell*ptr):Formula(ptr){}
    virtual void calc()override ;

};


#endif //ESAMELABORATORIO_MIN_H
