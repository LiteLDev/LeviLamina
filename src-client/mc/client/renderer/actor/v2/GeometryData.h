#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeometryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mDrawOffset;
    ::ll::TypedStorage<4, 4, uint> mCount;
    // NOLINTEND
};
