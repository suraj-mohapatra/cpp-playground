cmake_minimum_required(VERSION 3.16)
project(cpp_playground)

set(CMAKE_CXX_STANDARD 20)

# tells g++ compiler to look in include/
include_directories(include)

add_executable(cpp_playground
        src/main.cpp
        src/example.cpp
)
