#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AABBDimensionsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mHalfWidth;
    ::ll::TypedStorage<4, 4, float> mHeight;
    // NOLINTEND
};
