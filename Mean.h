//
// Created by Michele on 30/09/2016.
//

#ifndef ESAMELABORATORIO_MEAN_H
#define ESAMELABORATORIO_MEAN_H


#include "Formula.h"

class Mean : public Formula {
public:
        Mean(Cell* ptr) : Formula(ptr) {}
        virtual void calc() override;

};


#endif //ESAMELABORATORIO_MEAN_H
