//
// Created by tommaso on 28/09/2016.
//

#ifndef ESAMELABORATORIO_FORMULA_H
#define ESAMELABORATORIO_FORMULA_H


#include "Observer.h"
#include "Cell.h"
#include <list>

class Formula : public Observer  {
public:
    explicit Formula(float vl=0.);
    virtual void update() override;
    virtual void addCell(Subject* s) override;
    virtual void removeCell(Subject* s) override;
    virtual void calc() = 0;

private:
    float value;
    std::list<Subject*>subject;
    Cell* ptr;
};


#endif //ESAMELABORATORIO_FORMULA_H
