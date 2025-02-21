#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WindChargeKnockbackComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mKnockbackStartYCoordinate;
    ::ll::TypedStorage<4, 4, uint>  mTicksAfterAddition;
    ::ll::TypedStorage<1, 1, bool>  mShouldSendAwardAchievement;
    // NOLINTEND
};
