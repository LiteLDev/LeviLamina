#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EntitySensorUtils {
// NOLINTBEGIN
MCAPI class AABB getSensorBox(class Actor const& actor, bool relativeRange, class Vec3 const& range);
// NOLINTEND

}; // namespace EntitySensorUtils
