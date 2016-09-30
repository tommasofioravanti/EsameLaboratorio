//
// Created by tommaso on 30/09/2016.
//

#include "Min.h"


void Min::calc() {
    float y=0;
    cell.sort();
    y= cell.front()->getValue();
    value=y;
    ptr->setValue(value);

}
