#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BounceGravityCorrectionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPreCollisionSpeed;
    ::ll::TypedStorage<4, 4, float> mPostCollisionSpeed;
    // NOLINTEND
};
