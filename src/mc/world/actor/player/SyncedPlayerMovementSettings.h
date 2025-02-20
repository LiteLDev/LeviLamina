#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ServerAuthMovementMode.h"

struct SyncedPlayerMovementSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ServerAuthMovementMode> AuthorityMode;
    ::ll::TypedStorage<4, 4, int>                      mRewindHistorySize;
    ::ll::TypedStorage<1, 1, bool>                     ServerAuthBlockBreaking;
    // NOLINTEND
};
