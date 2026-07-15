#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mMinValue;
    ::ll::TypedStorage<4, 4, int>  mMaxValue;
    ::ll::TypedStorage<1, 1, bool> mInvert;
    ::ll::TypedStorage<1, 1, bool> mInclusive;
    // NOLINTEND
};
