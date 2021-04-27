#ifndef CABLEBOT_BUILD_AND_TEST_ICABLEBOTLIBDEMO_H
#define CABLEBOT_BUILD_AND_TEST_ICABLEBOTLIBDEMO_H

#include <cstdint>
namespace plant_imager
{
    class IPlantImagerDemo {
        public:
            IPlantImagerDemo() = default;
            virtual ~IPlantImagerDemo() = default;
            virtual int32_t Demo_function(int32_t num1, int32_t num2) = 0;
    };

}
#endif
