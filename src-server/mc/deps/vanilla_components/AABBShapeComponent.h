#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/versionless/world/phys/AABB.h"

struct AABBShapeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB> mAABB;
    ::ll::TypedStorage<4, 8, ::Vec2> mBBDim;
    // NOLINTEND

};
