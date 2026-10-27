#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/dimension/DimensionType.h"

struct WorldPosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>         mPos;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    // NOLINTEND
};
