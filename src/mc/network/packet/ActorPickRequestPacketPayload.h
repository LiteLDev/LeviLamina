#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorPickRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> mID;
    ::ll::TypedStorage<1, 1, bool>  mWithData;
    ::ll::TypedStorage<1, 1, uchar> mMaxSlots;
    // NOLINTEND
};
