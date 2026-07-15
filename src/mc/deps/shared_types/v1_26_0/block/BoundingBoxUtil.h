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
    MCAPI static ::AABB computeAABBFromOriginAndSize(::Vec3 const& origin, ::Vec3 const& size);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
