#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncedPlayerMovementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mRewindHistorySize;
    ::ll::TypedStorage<1, 1, bool> ServerAuthBlockBreaking;
    // NOLINTEND
};
