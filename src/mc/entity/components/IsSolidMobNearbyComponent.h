#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/StrictEntityContext.h"

// auto generated forward declare list
// clang-format off
class AABB;
class StrictEntityContext;
class Vec3;
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

public:
    // prevent constructor by default
    IsSolidMobNearbyComponent& operator=(IsSolidMobNearbyComponent const&);
    IsSolidMobNearbyComponent(IsSolidMobNearbyComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI IsSolidMobNearbyComponent(::IsSolidMobNearbyComponent&&);

    MCAPI ::IsSolidMobNearbyComponent& operator=(::IsSolidMobNearbyComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IsSolidMobNearbyComponent&&);
    // NOLINTEND
};
