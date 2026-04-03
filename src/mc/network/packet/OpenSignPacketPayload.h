#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct OpenSignPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<1, 1, bool>        mIsFrontSide;
    // NOLINTEND
};
