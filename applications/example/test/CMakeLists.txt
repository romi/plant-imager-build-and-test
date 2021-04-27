cmake_minimum_required(VERSION 3.10)

include_directories(mocks
        support)

set(SRCS
        src/tests_main.cpp
        )

add_executable(plant-imager_example_unit_tests ${SRCS})

target_link_libraries(  plant-imager_example_unit_tests
                        gtest
                        gmock
                        rpp
                        plantimager
                        stdc++fs)

add_test(
        NAME plant-imager_example_unit_tests
        COMMAND plant-imager_example_unit_tests
        )
