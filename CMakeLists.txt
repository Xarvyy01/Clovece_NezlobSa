cmake_minimum_required(VERSION 3.18)
project(Hra_Clovece)

set(CMAKE_CXX_STANDARD 17)

add_executable(Hra_Clovece main.cpp
        plocha.cpp
        plocha.h
        policko.cpp
        policko.h
        panacik.cpp
        panacik.h
        hrac.cpp
        hrac.h
        hra.cpp
        hra.h
)
