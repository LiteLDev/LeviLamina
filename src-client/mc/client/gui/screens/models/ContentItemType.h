#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ContentItemType : uint64 {
    // bitfield representation
    None            = 1ull << 1,
    World           = 1ull << 2,
    InvalidResource = 1ull << 3,
    Manifest        = 1ull << 4,
    WorldTemplate   = 1ull << 5,
    PackContent     = 1ull << 6,
};
