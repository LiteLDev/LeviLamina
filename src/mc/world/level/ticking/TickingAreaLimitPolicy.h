#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ticking/PersistentTickingAreaLimits.h"
#include "mc/world/level/ticking/TransientTickingAreaLimits.h"

struct TickingAreaLimitPolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::PersistentTickingAreaLimits> mPersistent;
    ::ll::TypedStorage<4, 8, ::TransientTickingAreaLimits>   mTransient;
    // NOLINTEND
};
