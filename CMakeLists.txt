cmake_minimum_required(VERSION 3.21)
project(ScreenStretch VERSION 1.0.0 LANGUAGES CXX)

find_package(Geode REQUIRED)

add_geode_mod(
    ScreenStretch
    src/main.cpp
)
