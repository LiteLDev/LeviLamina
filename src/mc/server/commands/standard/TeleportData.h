#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct TeleportData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mDestination;
    ::ll::TypedStorage<1, 1, bool>    mShouldStopRiding;
    ::ll::TypedStorage<4, 4, int>     mCause;
    ::ll::TypedStorage<4, 4, int>     mEntityType;
    // NOLINTEND
};
