#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::RenderHelper {

enum class PrimitiveType : int {
    Text        = 0,
    Box         = 1,
    Line        = 2,
    LineList    = 3,
    Disc        = 4,
    AxialSphere = 5,
    Arrow       = 6,
    Cylinder    = 7,
    Pyramid     = 8,
    Ellipsoid   = 9,
    Cuboid      = 10,
    Cone        = 11,
};

}
