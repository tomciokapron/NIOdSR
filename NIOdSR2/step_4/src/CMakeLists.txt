cmake_minimum_required(VERSION 3.10)

project(zad4)

add_executable(zad4 main.cpp Polygon.cpp Tringle.cpp Rectangle.cpp)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
install(FILES main.cpp Polygon.cpp Tringle.cpp Rectangle.cpp DESTINATION src)
install(FILES Polygon.h Tringle.h Rectangle.h DESTINATION inc)
