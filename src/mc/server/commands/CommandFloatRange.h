#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFloatRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mMinValue;
    ::ll::TypedStorage<4, 4, float> mMaxValue;
    ::ll::TypedStorage<1, 1, bool>  mInvert;
    ::ll::TypedStorage<1, 1, bool>  mInclusive;
    // NOLINTEND
};
