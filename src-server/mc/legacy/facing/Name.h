#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Facing {

enum class Name : uchar {
    Down = 0,
    Up = 1,
    North = 2,
    South = 3,
    West = 4,
    East = 5,
    Max = 6,
    NotDefined = 6,
    NumCullingIds = 7,
};

}
