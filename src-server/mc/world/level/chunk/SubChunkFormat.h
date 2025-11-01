#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SubChunkFormat : uchar {
    V17_0 = 0,
    V1_3_0 = 1,
    V17_0BadlyConverted1 = 2,
    V17_0BadlyConverted2 = 3,
    V17_0BadlyConverted3 = 4,
    V17_0BadlyConverted4 = 5,
    V17_0BadlyConverted5 = 6,
    V17_0BadlyConverted6 = 7,
    V1_3_0_2 = 8,
    V1_3_0_3 = 9,
};
