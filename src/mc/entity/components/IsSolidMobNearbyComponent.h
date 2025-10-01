#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/strict/StrictEntityContext.h"

// auto generated forward declare list
// clang-format off
class AABB;
class StrictEntityContext;
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
    IsSolidMobNearbyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IsSolidMobNearbyComponent(::IsSolidMobNearbyComponent const&);

    MCNAPI IsSolidMobNearbyComponent(::IsSolidMobNearbyComponent&&);

    MCNAPI ::IsSolidMobNearbyComponent& operator=(::IsSolidMobNearbyComponent&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IsSolidMobNearbyComponent const&);

    MCNAPI void* $ctor(::IsSolidMobNearbyComponent&&);
    // NOLINTEND
};
