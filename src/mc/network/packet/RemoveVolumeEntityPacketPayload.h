#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityNetId.h"

struct RemoveVolumeEntityPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    ::ll::TypedStorage<4, 4, ::EntityNetId>   mEntityNetId;
    // NOLINTEND
};
