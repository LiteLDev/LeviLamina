#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class IBlockSource;
class Vec3;
// clang-format on

namespace TargetRelativeMovementGoalUtils {
// functions
// NOLINTBEGIN
MCAPI ::std::optional<::Vec3> calculateJumpVectorForElevationAngle(::IBlockSource& region, ::AABB const& actorAABB, ::Vec3 const& actorPos, ::Vec3 const& jumpAimBlockPos, float angle, float maxJumpVelocity, float scaleFactor, bool checkCollision);

MCAPI ::Vec3 getRandomPointBehindTarget(::Actor const& owner, ::Actor const& target, float spreadDegrees, float minLandingDistance, float maxLandingDistance);

MCAPI bool validTransition(::AABB const& mobAABB, ::IBlockSource& region, ::Vec3 const& oldPos, ::Vec3 const& newPos, float scaleFactor);
// NOLINTEND

}
