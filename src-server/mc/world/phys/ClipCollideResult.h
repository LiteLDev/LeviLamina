#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct ClipCollideResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>   mPenetration;
    ::ll::TypedStorage<4, 12, ::Vec3> mClippedVelocity;
    ::ll::TypedStorage<4, 12, ::Vec3> mDepenetratingVelocity;
    ::ll::TypedStorage<4, 4, int>     mDepenetratingAxis;
    // NOLINTEND
};
