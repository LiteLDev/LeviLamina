#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GeometryResourceSpan {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mGeometryOffset;
    ::ll::TypedStorage<4, 4, uint> mGeometryCount;
    // NOLINTEND
};
