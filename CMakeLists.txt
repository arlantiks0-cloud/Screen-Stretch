cmake_minimum_required(VERSION 3.13)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include($ENV{GEODE_SDK}/share/cmake/geode/Geode.cmake)

project(ScreenStretch VERSION 1.0.0 LANGUAGES CXX)

add_geode_mod(
    ScreenStretch
    src/main.cpp
)
