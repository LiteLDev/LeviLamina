#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen::HeightmapProjection {

enum class Type : uchar {
    None           = 0,
    WorldSurfaceWg = 1,
    OceanFloorWg   = 2,
};

}
