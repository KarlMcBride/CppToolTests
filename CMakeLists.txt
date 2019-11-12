cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)

project(CalcApp)

add_library(CalcLib src/calculator.cpp)

target_include_directories(CalcLib PUBLIC "include")

add_executable(calc_app src/main.cpp)

target_link_libraries(calc_app CalcLib)