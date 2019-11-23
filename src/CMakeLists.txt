cmake_minimum_required(VERSION 3.7.2)
set(CMAKE_CXX_STANDARD 11)

#set(ENV{PATH} $PATH:/usr/bin/make)
set(CMAKE_C_COMPILER   /usr/bin/gcc)
set(CMAKE_CXX_COMPILER /usr/bin/g++)

project(CalcApp)

add_library(CalcLib calculator.cpp)
include_directories(.)
#target_include_directories(CalcLib PUBLIC "include")

add_executable(calc_app.ex main.cpp)

target_link_libraries(calc_app.ex CalcLib)
