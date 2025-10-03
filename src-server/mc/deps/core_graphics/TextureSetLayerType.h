#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

enum class TextureSetLayerType : uchar {
    Color      = 0,
    ColorUnlit = 1,
    Mer        = 2,
    Mers       = 3,
    Metalness  = 4,
    Emissive   = 5,
    Roughness  = 6,
    Subsurface = 7,
    Normal     = 8,
    Heightmap  = 9,
    Count      = 10,
};

}
