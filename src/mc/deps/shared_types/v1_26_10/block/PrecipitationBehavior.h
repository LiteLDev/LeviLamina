#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_10 {

enum class PrecipitationBehavior : uchar {
    None                       = 0,
    ObstructRain               = 1,
    ObstructRainAccumulateSnow = 2,
    Size                       = 3,
};

}
