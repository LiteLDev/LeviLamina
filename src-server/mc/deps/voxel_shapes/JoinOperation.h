#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

enum class JoinOperation : uchar {
    Intersection = 0,
    Union = 1,
    FirstMinusSecond = 2,
    SecondMinusFirst = 3,
};

}
