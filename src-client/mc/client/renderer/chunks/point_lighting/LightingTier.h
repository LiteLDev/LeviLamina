#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PointLighting {

enum class LightingTier : uchar {
    BakedLight      = 0,
    AnalyticalLight = 1,
    Count           = 2,
};

}
