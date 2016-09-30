cmake_minimum_required(VERSION 3.6)
project(EsameLaboratorio)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Subject.h Observer.h Cell.cpp Cell.h Formula.cpp Formula.h SumFormula.cpp SumFormula.h Max.cpp Max.h)
add_executable(EsameLaboratorio ${SOURCE_FILES})