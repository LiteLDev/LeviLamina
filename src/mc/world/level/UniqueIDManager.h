#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

class UniqueIDManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mLastUniqueID;
    ::ll::TypedStorage<1, 1, bool const>      mIsClientSide;
    // NOLINTEND
};
