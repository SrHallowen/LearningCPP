cmake_minimum_required(VERSION 4.2)
project(untitled)

set(CMAKE_CXX_STANDARD 26)

add_executable(untitled main.cpp
        "Swap Variables.cpp"
        constants.cpp
        mathematicalExpressions.cpp
        data.cpp)
