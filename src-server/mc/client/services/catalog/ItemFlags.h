#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ItemFlags : uint {
    // bitfield representation
    None = 0,
    Featured = 1u << 0,
    InsufficientMemory = 1u << 1,
    New = 1u << 2,
    Owned = 1u << 3,
    Rtx = 1u << 4,
    Sale = 1u << 5,
    Trending = 1u << 6,
    Editorial = 1u << 7,
    Max = 1u << 8,
};
