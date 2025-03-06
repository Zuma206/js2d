cmake_minimum_required(VERSION 3.30)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(js2d)

add_executable(${PROJECT_NAME} src/main.c)
add_subdirectory(libs/sdl)
target_link_libraries(${PROJECT_NAME} SDL3::SDL3)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_SOURCE_DIR}/libs/sdl/include)