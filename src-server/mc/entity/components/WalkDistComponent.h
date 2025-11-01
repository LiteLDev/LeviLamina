#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WalkDistComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mCurrent;
    ::ll::TypedStorage<4, 4, float> mPrevious;
    // NOLINTEND

};
