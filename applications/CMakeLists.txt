
cmake_minimum_required(VERSION 3.10)
project(plant-imager-applications)

############################################################

output_compile_flags()

############################################################

if(${PI_BUILD})
    add_subdirectory(plant-imager-camera)
endif()
