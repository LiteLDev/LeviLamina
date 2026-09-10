#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_40 {

struct JumpDataDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mDistanceScale;
    ::ll::TypedStorage<4, 4, float> mHeight;
    ::ll::TypedStorage<4, 4, int>   mJumpDelay;
    ::ll::TypedStorage<4, 4, int>   mAnimationDuration;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
