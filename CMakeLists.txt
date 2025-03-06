cmake_minimum_required(VERSION 3.30)
project(js2d)

add_executable(${PROJECT_NAME} src/main.c)
add_subdirectory(libs/sdl)
target_link_libraries(${PROJECT_NAME} SDL3::SDL3)