#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/AABB.h"

struct ShulkerBounds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mDepenetrationMagnitude;
    ::ll::TypedStorage<4, 24, ::AABB> mAABB;
    // NOLINTEND
};
