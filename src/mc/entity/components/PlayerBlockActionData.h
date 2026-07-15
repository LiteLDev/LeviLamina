#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/PlayerActionType.h"
#include "mc/world/level/BlockPos.h"

struct PlayerBlockActionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlayerActionType> mPlayerActionType;
    ::ll::TypedStorage<4, 12, ::BlockPos>        mPos;
    ::ll::TypedStorage<4, 4, int>                mFacing;
    // NOLINTEND
};
