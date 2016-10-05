//
// Created by Michele on 30/09/2016.
//

#include "Mean.h"

void Mean::calc() {
    float m = 0.;
    for ( auto itr = cell.begin(); itr != cell.end(); ++itr)
        m += (*itr)->getValue();
    m /= cell.size();
    value = m;
    ptr->setValue(value);
}
