#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HorizontalCollisionFlagComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCollidedOnXAxis;
    ::ll::TypedStorage<1, 1, bool> mCollidedOnZAxis;
    // NOLINTEND
};
