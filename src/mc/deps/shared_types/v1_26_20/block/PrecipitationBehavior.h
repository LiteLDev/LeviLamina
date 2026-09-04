#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20 {

enum class PrecipitationBehavior : uchar {
    None                       = 0,
    ObstructRain               = 1,
    ObstructRainAccumulateSnow = 2,
    Snowlogging                = 3,
    Size                       = 4,
};

}
