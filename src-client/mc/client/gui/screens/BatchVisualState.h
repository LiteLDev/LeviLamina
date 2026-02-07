#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BatchVisualState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAlpha;
    ::ll::TypedStorage<4, 4, float> mPropagatedAlpha;
    // NOLINTEND
};
