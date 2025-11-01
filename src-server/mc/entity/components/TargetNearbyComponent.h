#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetNearbyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mWasSeenLastTick;
    ::ll::TypedStorage<1, 1, bool> mWasInsideRange;
    ::ll::TypedStorage<1, 1, bool> mWasOutsideRange;
    ::ll::TypedStorage<4, 4, float> mPreviousDistance;
    // NOLINTEND

};
