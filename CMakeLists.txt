cmake_minimum_required(VERSION 3.9)

project(play)

add_subdirectory(guess)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} guess)