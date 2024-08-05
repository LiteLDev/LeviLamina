#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlockingUtility {
// NOLINTBEGIN
MCAPI bool
checkForSteeringCollision(class Actor& owner, class Vec3 const& direction, float distance, class Vec3& vecOut);

MCAPI void chooseRandomDirection(class Actor& owner, class Vec3& vecOut);

MCAPI void getWaterHeights(class Actor const& owner, float& minHeightOut, float& maxHeightOut);
// NOLINTEND

}; // namespace FlockingUtility
