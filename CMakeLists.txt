cmake_minimum_required(VERSION 3.14)
project(football_league)

set(CMAKE_CXX_STANDARD 14)

add_executable(football_league main.cpp Team.cpp Team.h League.cpp League.h Match.cpp Match.h)
