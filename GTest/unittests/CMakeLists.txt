cmake_minimum_required(VERSION 3.7.2)
set(CMAKE_CXX_STANDARD 11)

set(PROJECT_ROOT_DIR ${CMAKE_CURRENT_LIST_DIR}/..)
set(PROJECT_ROOT_DIR /home/karlm/Desktop/git_repos/CMakeTest)

# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
include_directories(../src/)

# Link runTests with test files, GTest and pthread library
add_executable(testExecutable calc_tests.cpp ../src/calculator.cpp)

# Link project source files
message("PROJECT_ROOT_DIR: ${PROJECT_ROOT_DIR}")
include_directories(${PROJECT_ROOT_DIR}/src/)

#target_link_libraries(runTests ../src/calculator.cpp)
target_link_libraries(testExecutable ${GTEST_LIBRARIES} pthread)
