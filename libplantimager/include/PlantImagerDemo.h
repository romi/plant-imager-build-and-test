#ifndef CABLEBOT_BUILD_AND_TEST_CABLEBOTLIBDEMO_H
#define CABLEBOT_BUILD_AND_TEST_CABLEBOTLIBDEMO_H

#include "IPlantImagerDemo.h"

namespace plant_imager {

        class PlantImagerDemo : public IPlantImagerDemo {
                public:
                    PlantImagerDemo() = default;
                        ~PlantImagerDemo() override = default;
                        int32_t Demo_function(int32_t num1, int32_t num2) override;
        };

}
#endif
