#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"
#include "mc/world/level/BlockPos.h"

struct BlockActorDataPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>    mPos;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mData;
    // NOLINTEND
};
