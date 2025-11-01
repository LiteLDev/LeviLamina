#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace astc_codec {

enum class FootprintType : int {
    K4x4 = 0,
    K5x4 = 1,
    K5x5 = 2,
    K6x5 = 3,
    K6x6 = 4,
    K8x5 = 5,
    K8x6 = 6,
    K10x5 = 7,
    K10x6 = 8,
    K8x8 = 9,
    K10x8 = 10,
    K10x10 = 11,
    K12x10 = 12,
    K12x12 = 13,
    KCount = 14,
};

}
