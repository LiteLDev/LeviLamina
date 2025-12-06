#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoatMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mIsInAir;
    ::ll::TypedStorage<4, 4, int>   mOutOfControlTicks;
    ::ll::TypedStorage<4, 4, float> mYRotD;
    ::ll::TypedStorage<4, 4, float> mInvFriction;
    ::ll::TypedStorage<4, 4, float> mAirFrictionWhenLeashed;
    // NOLINTEND
};
