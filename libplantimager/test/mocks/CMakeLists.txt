project(plant-imager-mocks)

#
set(SOURCES
        PlantImagerDemoMock.h
)

add_library(plantimager-mocks SHARED ${SOURCES})
set_target_properties(plantimager-mocks PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories(plantimager-mocks
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}
        )