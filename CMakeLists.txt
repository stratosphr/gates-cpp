cmake_minimum_required(VERSION 3.15)
project(gates)

set(CMAKE_CXX_STANDARD 14)

add_executable(gates main.cpp gates/AGate.cpp gates/AGate.h gates/True.cpp gates/True.h gates/False.cpp gates/False.h gates/And.cpp gates/And.h)