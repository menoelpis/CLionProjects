cmake_minimum_required(VERSION 3.5)
project(GradeBook02)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp GradeBook.cpp GradeBook.h)
add_executable(GradeBook02 ${SOURCE_FILES})