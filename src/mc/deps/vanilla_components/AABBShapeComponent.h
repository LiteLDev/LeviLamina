#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec2;
// clang-format on

struct AABBShapeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::AABB> mAABB;
    ::ll::TypedStorage<4, 8, ::Vec2>  mBBDim;
    // NOLINTEND
};
