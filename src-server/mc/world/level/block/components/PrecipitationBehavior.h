#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PrecipitationBehavior : uchar {
    None = 0,
    ObstructRain = 1,
    ObstructRainAccumulateSnow = 2,
};
