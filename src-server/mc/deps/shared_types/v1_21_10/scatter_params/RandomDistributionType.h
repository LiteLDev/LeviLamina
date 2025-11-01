#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_10 {

enum class RandomDistributionType : int {
    SingleValued = 0,
    Uniform = 1,
    Gaussian = 2,
    InverseGaussian = 3,
    FixedGrid = 4,
    JitteredGrid = 5,
    Triangle = 6,
};

}
