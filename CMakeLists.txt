cmake_minimum_required(VERSION 3.5)

project(creatAvectoreandremoveAllTheprimesNumbers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(creatAvectoreandremoveAllTheprimesNumbers main.cpp)

install(TARGETS creatAvectoreandremoveAllTheprimesNumbers
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
