#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nbt/CompoundTag.h"

struct LevelEventGenericPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mEventId;
    ::ll::TypedStorage<8, 24, ::CompoundTag> mData;
    // NOLINTEND
};
