#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/CacheCoordinates.h"
#include "mc/world/level/BlockPos.h"

struct PrecompCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 432, ::CacheCoordinates[12]> mCacheCoordinates;
    ::ll::TypedStorage<4, 312, ::BlockPos[26]>         mBlockPos;
    // NOLINTEND
};
