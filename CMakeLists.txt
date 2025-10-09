cmake_minimum_required(VERSION 4.0)
project(fmsh_chernyaev)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(fmsh_chernyaev
        .idea/.gitignore
        .idea/fmsh_chernyaev.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        main.cpp
        main.h
        B.cpp
        B.h)
