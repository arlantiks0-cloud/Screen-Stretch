cmake_minimum_required(VERSION 3.21)
project(ScreenStretch VERSION 1.0.0 LANGUAGES CXX)

if (NOT TARGET Geode)
    find_package(Geode REQUIRED)
endif()

add_geode_mod(
    ScreenStretch
    src/main.cpp
)
