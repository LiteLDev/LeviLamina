#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KnockbackParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHorizontalPower;
    ::ll::TypedStorage<4, 4, float> mVerticalPower;
    ::ll::TypedStorage<4, 4, float> mVerticalVelocityCap;
    ::ll::TypedStorage<4, 4, float> mScalePreviousVelocity;
    ::ll::TypedStorage<1, 1, bool>  mScaleWithDamage;
    // NOLINTEND
};
