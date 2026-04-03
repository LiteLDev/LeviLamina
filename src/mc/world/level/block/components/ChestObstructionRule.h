#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChestObstructionRule : uchar {
    AlwaysObstruct = 0,
    NeverObstruct  = 1,
    ShapeObstruct  = 2,
};
