#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlockingUtility {
// NOLINTBEGIN
// symbol: ?checkForSteeringCollision@FlockingUtility@@YA_NAEAVActor@@AEBVVec3@@MAEAV3@@Z
MCAPI bool
checkForSteeringCollision(class Actor& owner, class Vec3 const& direction, float distance, class Vec3& vecOut);

// symbol: ?chooseRandomDirection@FlockingUtility@@YAXAEAVActor@@AEAVVec3@@@Z
MCAPI void chooseRandomDirection(class Actor& owner, class Vec3& vecOut);

// symbol: ?getWaterHeights@FlockingUtility@@YAXAEBVActor@@AEAM1@Z
MCAPI void getWaterHeights(class Actor const& owner, float& minHeightOut, float& maxHeightOut);
// NOLINTEND

}; // namespace FlockingUtility
