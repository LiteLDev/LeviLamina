#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Tick.h"

class ExpiringTick {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick> mExpireAtTick;
    ::ll::TypedStorage<2, 2, ushort> mTicksUntilExpire;
    // NOLINTEND
};
