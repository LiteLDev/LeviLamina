#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ContainerID.h"

struct PlayerHotbarPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mSelectedSlot;
    ::ll::TypedStorage<1, 1, bool> mShouldSelectSlot;
    ::ll::TypedStorage<1, 1, ::ContainerID> mContainerId;
    // NOLINTEND

};
