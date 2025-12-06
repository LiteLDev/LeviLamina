#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DashActionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mCooldownTicks;
    ::ll::TypedStorage<4, 4, float> mHorizontalMomentum;
    ::ll::TypedStorage<4, 4, float> mVerticalMomentum;
    ::ll::TypedStorage<1, 1, bool>  mUsePassengerDirection;
    // NOLINTEND
};
