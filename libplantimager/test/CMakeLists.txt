cmake_minimum_required(VERSION 3.10)

set(IMAGERSOURCES
        src/tests_main.cpp
        src/PlantImagerDemo_tests.cpp)

add_executable( libplantimager_unit_tests
                ${IMAGERSOURCES})

target_link_libraries( libplantimager_unit_tests
                        gtest
                        gmock
                        plantimager
                        plantimager-mocks)

add_test(
    NAME libplantimager_unit_tests
    COMMAND libplantimager_unit_tests
)

if(BUILD_COVERAGE)
    SETUP_TARGET_FOR_COVERAGE_LCOV(
            NAME libplantimager_unit_tests_coverage
            EXECUTABLE ctest -V ${n_cores} -R "libplantimager_"
            EXCLUDE '*wrapper*' "src/Linux.cpp" "include/*.h"
            DEPENDENCIES libplantimager_unit_tests)
endif()
