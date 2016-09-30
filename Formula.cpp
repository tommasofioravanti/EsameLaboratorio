//
// Created by tommaso on 28/09/2016.
//

#include "Formula.h"

void Formula::addCell(Subject *s) {
    subject.push_back(s);
    s->subscribe(this);
    update();
}

float Formula::getvalue() const {
    return value;
}

void Formula::removeCell(Subject *s) {
    subject.remove(s);
    s->unsubscribe(this);
    update();
}

void Formula::update() {
    calc();
}
