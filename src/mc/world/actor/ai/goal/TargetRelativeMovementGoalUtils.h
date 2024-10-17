#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace TargetRelativeMovementGoalUtils {
// NOLINTBEGIN
MCAPI std::optional<class Vec3> calculateJumpVectorForElevationAngle(
    class IBlockSource& region,
    class AABB const&   actorAABB,
    class Vec3 const&   actorPos,
    class Vec3 const&   jumpAimBlockPos,
    float               angle,
    float               maxJumpVelocity,
    float               scaleFactor,
    bool                checkCollision
);

MCAPI class Vec3 getRandomPointBehindTarget(
    class Actor const& owner,
    class Actor const& target,
    float              spreadDegrees,
    float              minLandingDistance,
    float              maxLandingDistance
);

MCAPI bool validTransition(
    class AABB const&   mobAABB,
    class IBlockSource& region,
    class Vec3 const&   oldPos,
    class Vec3 const&   newPos,
    float               scaleFactor
);
// NOLINTEND

}; // namespace TargetRelativeMovementGoalUtils
