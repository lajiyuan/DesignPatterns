cmake_minimum_required(VERSION 3.17)
project(Part_1)

set(CMAKE_CXX_STANDARD 14)

include_directories(../common)

add_executable(Part_1_test_1 test_1/main.cpp test_1/Shape.h)