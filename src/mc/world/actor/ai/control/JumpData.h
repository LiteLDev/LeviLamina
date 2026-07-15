#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JumpData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDistanceScale;
    ::ll::TypedStorage<4, 4, float> mHeight;
    ::ll::TypedStorage<4, 4, int>   mJumpDelay;
    ::ll::TypedStorage<4, 4, int>   mAnimDuration;
    // NOLINTEND
};
