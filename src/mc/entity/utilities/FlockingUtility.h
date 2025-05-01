#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Vec3;
// clang-format on

namespace FlockingUtility {
// functions
// NOLINTBEGIN
MCNAPI bool checkForSteeringCollision(::Actor& owner, ::Vec3 const& direction, float distance, ::Vec3& vecOut);

MCNAPI void chooseRandomDirection(::Actor& owner, ::Vec3& vecOut);

MCNAPI void getWaterHeights(::Actor const& owner, float& minHeightOut, float& maxHeightOut);
// NOLINTEND

} // namespace FlockingUtility
