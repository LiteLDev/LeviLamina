#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct CacheSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> filledBytes;
    ::ll::TypedStorage<4, 4, uint> capacityBytes;
    ::ll::TypedStorage<4, 4, uint> filledCount;
    ::ll::TypedStorage<4, 4, uint> capacityCount;
    // NOLINTEND
};

} // namespace OreUI
