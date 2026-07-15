#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"

struct AnvilDamagePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>         mDamage;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPosition;
    // NOLINTEND
};
