#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/world/level/BlockPos.h"

struct PlayerToggleCrafterSlotRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mPos;
    ::ll::TypedStorage<4, 4, int> mSlotIndex;
    ::ll::TypedStorage<1, 1, bool> mIsDisabled;
    // NOLINTEND

};
