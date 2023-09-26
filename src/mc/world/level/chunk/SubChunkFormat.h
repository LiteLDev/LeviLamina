#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SubChunkFormat : uchar {
    v17_0                  = 0x0,
    v1_3_0_1               = 0x1,
    v17_0_badly_converted1 = 0x2,
    v17_0_badly_converted2 = 0x3,
    v17_0_badly_converted3 = 0x4,
    v17_0_badly_converted4 = 0x5,
    v17_0_badly_converted5 = 0x6,
    v17_0_badly_converted6 = 0x7,
    v1_3_0_2               = 0x8,
    v1_3_0_3               = 0x9,
};
