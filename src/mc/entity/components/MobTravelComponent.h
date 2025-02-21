#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

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
    // NOLINTEND
};
