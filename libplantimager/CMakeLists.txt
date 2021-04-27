cmake_minimum_required(VERSION 3.10)
project(libplantimager)

set(librpp_VERSION_MAJOR 0)
set(librpp_VERSION_MINOR 1)


include_directories( ${CMAKE_CURRENT_SOURCE_DIR}/include )

set(SOURCES
        include/IPlantImagerDemo.h
        include/PlantImagerDemo.h
        src/PlantImagerDemo.cpp)


add_library(plantimager SHARED ${SOURCES})

target_include_directories(plantimager
        PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
        )

target_link_libraries(plantimager stdc++fs)
# Add dependent libs as necessary
#target_link_libraries(plantimager rpp rcompp-lite romi stdc++fs)

# Always add mock library as other projects could rely on them.
add_subdirectory(test/mocks)
if(BUILD_TESTS)
    add_subdirectory(test)
endif()
