//
// Created by Michele on 30/09/2016.
//

#include "Min.h"

void Min::calc() {
    value = (cell.front()->getValue()).toFloat();
    for (auto itr = cell.begin(); itr != cell.end(); itr++)
        if (value > ((*itr)->getValue()).toFloat())
            value = ((*itr)->getValue()).toFloat();
    ptr->setValue(value);
}
