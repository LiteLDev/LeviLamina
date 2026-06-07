#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockGeoType {

enum class GeoType : uchar {
    Terrain = 0,
    Logs    = 1,
    Leaves  = 2,
    Water   = 3,
    Lava    = 4,
    Glass   = 5,
};

}
