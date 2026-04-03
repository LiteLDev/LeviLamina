#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ApplyGravityComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mGravity;
    ::ll::TypedStorage<1, 1, bool>  mResetFallDistance;
    // NOLINTEND
};
