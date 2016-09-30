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
    explicit Formula(Cell* ptr): ptr(ptr){}
    float getvalue() const;
    virtual void update() override;
    virtual void addCell(Subject* s) ;
    virtual void removeCell(Subject* s) ;
    virtual void calc() = 0;

protected:
    float value;
    std::list<Subject*>subject;
    Cell* ptr;
};


#endif //ESAMELABORATORIO_FORMULA_H
