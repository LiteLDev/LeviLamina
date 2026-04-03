#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_10 {

enum class ChestObstructionRule : uchar {
    AlwaysObstruct = 0,
    NeverObstruct  = 1,
    ShapeObstruct  = 2,
    Size           = 3,
};

}
