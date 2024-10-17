#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DataItemType : uchar {
    Byte        = 0x0,
    Short       = 0x1,
    Int         = 0x2,
    Float       = 0x3,
    String      = 0x4,
    CompoundTag = 0x5,
    BlockPos    = 0x6,
    Int64       = 0x7,
    Vec3        = 0x8,
    Unknown     = 0x9,
};
