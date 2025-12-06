#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

enum class PrimitiveMode : uchar {
    None          = 0,
    QuadList      = 1,
    TriangleList  = 2,
    TriangleStrip = 3,
    LineList      = 4,
    LineStrip     = 5,
};

}
