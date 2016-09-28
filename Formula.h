//
// Created by tommaso on 28/09/2016.
//

#ifndef ESAMELABORATORIO_FORMULA_H
#define ESAMELABORATORIO_FORMULA_H


#include "Observer.h"
#include <list>

class Formula : public Observer  {





private:
    float value;
    std::list<Subject*>subject;
};


#endif //ESAMELABORATORIO_FORMULA_H
