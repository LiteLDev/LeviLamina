#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DashComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mCooldownTicks;
    ::ll::TypedStorage<4, 4, float> mHorizontalMomentum;
    ::ll::TypedStorage<4, 4, float> mVerticalMomentum;
    // NOLINTEND
};
