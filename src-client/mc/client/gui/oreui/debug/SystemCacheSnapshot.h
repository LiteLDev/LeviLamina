#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct SystemCacheSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> aliveImagesCount;
    ::ll::TypedStorage<4, 4, uint> aliveTotalBytesUsed;
    ::ll::TypedStorage<4, 4, uint> orphanedImagesCount;
    ::ll::TypedStorage<4, 4, uint> orphanedBytesUsed;
    // NOLINTEND
};

} // namespace OreUI
