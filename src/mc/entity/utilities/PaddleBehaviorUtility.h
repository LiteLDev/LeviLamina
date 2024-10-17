#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PaddleBehaviorUtility {
// NOLINTBEGIN
MCAPI std::array<float, 2>
      computePaddleForcesBasedOnGaze(class Vec3& inGazeDir, float forceLength, float facingOffsetFactor, float yRot);

MCAPI void setPaddleForce(struct Paddle& boatPaddle, struct Tick const& currentTick, float force);

MCAPI void setPaddleState(struct Paddle& boatPaddle, struct Tick const& currentTick, bool pressed);
// NOLINTEND

}; // namespace PaddleBehaviorUtility
