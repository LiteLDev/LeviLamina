#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PaddleBehaviorUtility {
// NOLINTBEGIN
MCAPI std::array<float, 2> computePaddleForcesBasedOnGaze(class Vec3&, float, float, float);

MCAPI void setPaddleForce(struct Paddle&, struct Tick const& currentTick, float force);

MCAPI void setPaddleState(struct Paddle&, struct Tick const&, bool);
// NOLINTEND

}; // namespace PaddleBehaviorUtility
