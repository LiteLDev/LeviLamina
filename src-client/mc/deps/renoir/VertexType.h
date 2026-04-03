#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class VertexType : int {
    Standard         = 0,
    Slim             = 1,
    SlimInstanceData = 2,
    Glyph            = 3,
    FillPathAtlas    = 4,
    Custom           = 5,
    Count            = 6,
};

}
