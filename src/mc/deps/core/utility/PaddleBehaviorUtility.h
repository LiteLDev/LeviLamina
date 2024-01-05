#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PaddleBehaviorUtility {
// NOLINTBEGIN
// symbol: ?computePaddleForcesBasedOnGaze@PaddleBehaviorUtility@@YA?AV?$array@M$01@std@@AEAVVec3@@MMM@Z
MCAPI std::array<float, 2> computePaddleForcesBasedOnGaze(class Vec3&, float, float, float);

// symbol: ?setPaddleForce@PaddleBehaviorUtility@@YAXAEAUPaddle@@AEBUTick@@M@Z
MCAPI void setPaddleForce(struct Paddle&, struct Tick const& currentTick, float force);

// symbol: ?setPaddleState@PaddleBehaviorUtility@@YAXAEAUPaddle@@AEBUTick@@_N@Z
MCAPI void setPaddleState(struct Paddle&, struct Tick const&, bool);
// NOLINTEND

}; // namespace PaddleBehaviorUtility
