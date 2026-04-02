#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

class CollisionBoxDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::Vec2> mBBDim;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setHeight(float const& height);

    MCAPI void setWidth(float const& width);
    // NOLINTEND
};
