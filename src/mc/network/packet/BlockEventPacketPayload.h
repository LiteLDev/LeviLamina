#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct BlockEventPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<4, 4, int>         mB0;
    ::ll::TypedStorage<4, 4, int>         mB1;
    // NOLINTEND
};
