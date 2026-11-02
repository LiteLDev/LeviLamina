#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/ContainerID.h"

struct ClientboundStonecutterSetRecipePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPlayerUniqueId;
    ::ll::TypedStorage<1, 1, ::ContainerID>   mContainerId;
    ::ll::TypedStorage<4, 4, int>             mRecipeIndex;
    // NOLINTEND
};
