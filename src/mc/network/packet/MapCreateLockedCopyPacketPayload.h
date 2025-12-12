#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

struct MapCreateLockedCopyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mOriginalMapId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mNewMapId;
    // NOLINTEND
};
