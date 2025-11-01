#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/storage/PhotoType.h"

struct PhotoStorageContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PhotoType> mType;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mOwnerId;
    // NOLINTEND

};
