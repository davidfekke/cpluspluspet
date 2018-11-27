
cmake_minimum_required (VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)

project(hello C CXX)

add_executable(hello.a
                helloworld.cpp
                Pet.cpp)
