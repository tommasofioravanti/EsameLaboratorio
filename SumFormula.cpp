//
// Created by Michele on 30/09/2016.
//

#include "SumFormula.h"

void SumFormula::calc() {
    float x=0;
    for (auto itr= subject.begin();itr!=subject.end();itr++)
        x+= dynamic_cast<Cell*>(*itr)->getValue();
    value=x;
    ptr->setValue(value);
}
