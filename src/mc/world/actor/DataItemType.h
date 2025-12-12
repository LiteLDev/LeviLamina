#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DataItemType : uchar {
    Byte        = 0,
    Short       = 1,
    Int         = 2,
    Float       = 3,
    String      = 4,
    CompoundTag = 5,
    Pos         = 6,
    Int64       = 7,
    Vec3        = 8,
    Unknown     = 9,
};
