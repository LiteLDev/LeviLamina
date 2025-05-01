#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct MobTravelComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mLocalMovementVelocity;
    ::ll::TypedStorage<4, 4, float>   mMovementSpeed;
    ::ll::TypedStorage<4, 12, ::Vec3> mPosBeforeMove;
    ::ll::TypedStorage<4, 4, float>   mFriction;
    ::ll::TypedStorage<1, 1, bool>    mBlockModifiedFriction;
    ::ll::TypedStorage<4, 4, float>   mSlowdown;
    ::ll::TypedStorage<1, 1, bool>    mDoesVerticalFriction;
    ::ll::TypedStorage<1, 1, bool>    mDoesGroundFriction;
    // NOLINTEND
};
