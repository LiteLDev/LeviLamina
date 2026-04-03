#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

namespace FieldOfViewUtility {
// functions
// NOLINTBEGIN
MCNAPI bool isWithinFieldOfView(
    ::Vec3 const& origin,
    float         viewYawOffset,
    ::Vec3 const& target,
    int           angleOfViewX,
    int           angleOfViewY
);
// NOLINTEND

} // namespace FieldOfViewUtility
