#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

struct IsSolidMobNearbyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mMaxDepenetrationMagnitude;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::StrictEntityContext,
            ::AABB,
            ::StrictEntityContext::Hash,
            ::std::equal_to<::StrictEntityContext>>>
        mNearbyColliders;
    // NOLINTEND
};
