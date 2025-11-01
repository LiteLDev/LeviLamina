#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

struct StateVectorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPos;
    ::ll::TypedStorage<4, 12, ::Vec3> mPosPrev;
    ::ll::TypedStorage<4, 12, ::Vec3> mPosDelta;
    // NOLINTEND
};
