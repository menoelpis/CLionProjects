cmake_minimum_required(VERSION 3.5)
project(PhoneNumber)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp PhoneNumber.cpp PhoneNumber.h)
add_executable(PhoneNumber ${SOURCE_FILES})