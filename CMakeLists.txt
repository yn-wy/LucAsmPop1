cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(LucAsm1 LANGUAGES CXX)

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(q1 ${CMAKE_CURRENT_SOURCE_DIR}/Source/q1.cpp)
add_executable(q2 ${CMAKE_CURRENT_SOURCE_DIR}/Source/q2.cpp)
add_executable(q3 ${CMAKE_CURRENT_SOURCE_DIR}/Source/q3.cpp)
add_executable(q4 ${CMAKE_CURRENT_SOURCE_DIR}/Source/q4.cpp)
add_executable(q5 ${CMAKE_CURRENT_SOURCE_DIR}/Source/q5.cpp)
add_executable(qb ${CMAKE_CURRENT_SOURCE_DIR}/Source/qb.cpp)
