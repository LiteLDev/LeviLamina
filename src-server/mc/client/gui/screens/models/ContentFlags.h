#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContentFlags : uint64 {
    // bitfield representation
    None         = 0,
    Cached       = 1ull << 0,
    Invalid      = 1ull << 1,
    Filtered     = 1ull << 2,
    WorldContent = 1ull << 3,
    Usable       = 1ull << 4,
    All          = Cached | Invalid | Filtered | WorldContent | Usable,
};
