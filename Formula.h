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
    virtual void addCell(Cell*cel) ;
    virtual void removeCell(Cell* cel) ;
    virtual void calc() = 0;

protected:
    float value;
    std::list<Cell*>cell;
    Cell* ptr;
};


#endif //ESAMELABORATORIO_FORMULA_H
