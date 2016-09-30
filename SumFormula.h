//
// Created by Michele on 30/09/2016.
//

#ifndef ESAMELABORATORIO_SUMFORMULA_H
#define ESAMELABORATORIO_SUMFORMULA_H


#include "Formula.h"

class SumFormula: public Formula {
public:
    SumFormula(Cell* ptr):Formula(ptr){}
    virtual void calc()override ;

};


#endif //ESAMELABORATORIO_SUMFORMULA_H
