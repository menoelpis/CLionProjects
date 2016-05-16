cmake_minimum_required(VERSION 3.5)
project(DefineClass)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp GradeBook.h)
add_executable(DefineClass ${SOURCE_FILES})