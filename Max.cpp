//
// Created by Michele on 30/09/2016.
//

#include "Max.h"

void Max::calc() {
    float z = 0.;
    cell.sort();
    z = (cell.back()->getValue());
    value = z;
    ptr->setValue(value);
}
