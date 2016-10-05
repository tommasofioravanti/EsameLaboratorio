//
// Created by Michele on 30/09/2016.
//

#include "SumFormula.h"

void SumFormula::calc() {
    float x = 0.;
    for (auto itr = cell.begin(); itr != cell.end(); ++itr)
        x += (*itr)->getValue();
    value = x;
    ptr->setValue(value);

}
