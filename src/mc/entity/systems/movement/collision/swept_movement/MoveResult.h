#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/AABB.h"

namespace SweptMovement {

struct MoveResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mAccumulatedMove;
    ::ll::TypedStorage<4, 4, float>   mTotalPenetration;
    ::ll::TypedStorage<4, 24, ::AABB> mResultShape;
    // NOLINTEND
};

} // namespace SweptMovement
