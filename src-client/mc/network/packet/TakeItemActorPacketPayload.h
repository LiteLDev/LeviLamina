#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"

struct TakeItemActorPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mItemId;
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mActorId;
    // NOLINTEND
};
