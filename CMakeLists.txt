cmake_minimum_required(VERSION 3.3)
project(belstu_oap)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "/home/ytsialitsyn/ClionProjects/Binaries")

set(SOURCE_FILES main.cpp Lab4.cpp Lab4.h Lab5.cpp Lab5.h Lab7.cpp Lab7.h Lab9.cpp Lab9.h)
add_executable(belstu_oap ${SOURCE_FILES})