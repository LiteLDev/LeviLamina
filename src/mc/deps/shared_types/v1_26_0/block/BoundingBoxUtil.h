#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
// clang-format on

namespace SharedTypes::v1_26_0 {

struct BoundingBoxUtil {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool areCollidersWithinBounds(
        ::std::vector<::AABB> const& colliderList,
        ::Vec3 const&                minBounds,
        ::Vec3 const&                maxBounds
    );

    MCAPI static ::AABB computeAABBFromOriginAndSize(::Vec3 const& origin, ::Vec3 const& size);

    MCAPI static bool isColliderWithinBounds(::AABB const& collider, ::Vec3 const& minBounds, ::Vec3 const& maxBounds);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
