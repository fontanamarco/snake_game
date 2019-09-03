cmake_minimum_required(VERSION 3.7)
project(SnakeGame)

set(CMAKE_CXX_STANDARD 14)
set(SDL2_INCLUDE_DIR /usr/include/SDL2)
set(SDL2_LIBRARY /usr/lib/x86_64-linux-gnu/libSDL2.so)
set(SDL2_IMAGE /usr/lib/x86_64-linux-gnu/libSDL2_image.so)

#/find_package(SDL2 REQUIRED)
#include_directories(${SDL2_INCLUDE_DIRS} src)
include_directories(${SDL2_INCLUDE_DIR} src)

add_executable(SnakeGame
        src/controller.cpp
        src/controller.h
        src/game.cpp
        src/game.h
        src/main.cpp
        src/renderer.cpp
        src/renderer.h
        src/snake.cpp
        src/snake.h src/audio.cpp src/audio.h)

target_link_libraries(SnakeGame ${SDL2_LIBRARY} ${SDL2_IMAGE})