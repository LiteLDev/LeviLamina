#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TargetRelativeMovementGoalUtils {
// NOLINTBEGIN
MCAPI std::optional<class Vec3> calculateJumpVectorForElevationAngle(
    class IBlockSource&,
    class AABB const&,
    class Vec3 const&,
    class Vec3 const&,
    float,
    float,
    float,
    bool
);

MCAPI class Vec3 getRandomPointBehindTarget(class Actor const&, class Actor const&, float, float, float);

MCAPI bool validTransition(class AABB const&, class IBlockSource&, class Vec3 const&, class Vec3 const&, float);
// NOLINTEND

}; // namespace TargetRelativeMovementGoalUtils
