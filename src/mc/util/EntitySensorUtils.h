#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Vec3;
// clang-format on

namespace EntitySensorUtils {
// functions
// NOLINTBEGIN
MCAPI ::AABB getSensorBox(::Actor const& actor, bool relativeRange, ::Vec3 const& range);
// NOLINTEND

} // namespace EntitySensorUtils
