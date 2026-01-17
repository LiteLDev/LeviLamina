#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

enum class PrimitiveTopology : int {
    TriangleList  = 0,
    TriangleStrip = 1,
    Points        = 2,
    Lines         = 3,
    LineStrip     = 4,
    Count         = 5,
};

}
