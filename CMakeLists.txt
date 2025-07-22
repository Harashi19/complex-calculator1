cmake_minimum_required(VERSION 3.31)
project(complex_calculator C)

set(CMAKE_C_STANDARD 11)

add_library(complex_calculator STATIC
        main.c
        complex.c
        complex.h
)
