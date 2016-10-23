//
// Created by Michele on 23/10/2016.
//

#include <gtest/gtest.h>
#include "../Cell.h"

TEST(CellTest, CellValue){
    Cell p;
    p.setValue(5);
    ASSERT_EQ(5,p.getValue().toFloat());
}

