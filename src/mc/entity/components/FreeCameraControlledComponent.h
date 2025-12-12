#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FreeCameraControlledComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mStrafeSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mBackwardsSpeedModifier;
    // NOLINTEND
};
