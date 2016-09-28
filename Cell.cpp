//
// Created by tommaso on 28/09/2016.
//

#include "Cell.h"


Cell::Cell(float v) : value(v) {}

float Cell::getValue() const {
    return value;
}

void Cell::setValue(float v) {
    v = value;
    notify();
}

Cell::~Cell() {

}

void Cell::notify() {
    for (auto itr = observers.begin(); itr!=observers.end(); ++ itr) {
        (*itr)->update();

    }
}

void Cell::subscribe(Observer *o) {
    observers.push_back(o);

}

void Cell::unsubscribe(Observer *o) {
observers.remove(o);
}
