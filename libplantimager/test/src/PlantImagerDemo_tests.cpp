#include <string>
#include "gtest/gtest.h"
#include "PlantImagerDemo.h"
#include <PlantImagerDemoMock.h>

using ::testing::_;
using ::testing::Return;

class plant_imager_tests : public ::testing::Test
{
protected:
    plant_imager_tests() {
    }

    ~plant_imager_tests() override = default;

    void SetUp() override
    {
    }

    void TearDown() override
    {
    }

};

TEST_F(plant_imager_tests, plant_imager_result_is_correct)
{
        // Arrange;
        const int32_t num1 = 1;
        const int32_t num2 = 2;
        int expected = num1 + num2;
        plant_imager::PlantImagerDemo cablebot_demo;

        // Act
        auto actual = cablebot_demo.Demo_function(num1, num2);

        // Assert
        ASSERT_EQ(actual, expected);
}

TEST_F(plant_imager_tests, plant_imager_example_mock_use)
{
    // Arrange
    int32_t expected = 3;
    plant_imager_mocks::PlantImagerDemoMock demoMock;
    EXPECT_CALL(demoMock, Demo_function(_,_))
            .WillOnce(Return(expected));

    // Act
    auto actual = demoMock.Demo_function(1,2);

    // Assert
    ASSERT_EQ(actual, expected);
}
