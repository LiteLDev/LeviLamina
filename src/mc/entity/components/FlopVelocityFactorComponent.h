#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FlopVelocityFactorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mVertical;
    ::ll::TypedStorage<4, 4, float> mHorizontal;
    // NOLINTEND
};
