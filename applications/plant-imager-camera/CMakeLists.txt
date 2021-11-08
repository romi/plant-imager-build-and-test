cmake_minimum_required(VERSION 3.10)
project(plant-imager-camera)

add_executable(plant-imager-camera main.cpp)
target_link_libraries(plant-imager-camera romi rcom)
install(TARGETS plant-imager-camera DESTINATION bin)
