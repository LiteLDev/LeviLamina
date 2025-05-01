#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemDescriptor.h"

struct PlayerDestroyProgressCacheComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>  mCurrentToolIsOptimalToolForMining;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mCurrentToolBlockDestroySpeed;
    ::ll::TypedStorage<8, 8, uint64>                 mLastBlockBeingDestroyed;
    ::ll::TypedStorage<8, 16, ::ItemDescriptor>      mLastItemUsedToDestroy;
    // NOLINTEND
};
