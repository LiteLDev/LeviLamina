#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PaddleBehaviorUtility { struct PaddleForces; }
// clang-format on

namespace PaddleBehaviorUtility {
// NOLINTBEGIN
// symbol: ?computePaddleForcesBasedOnGaze@PaddleBehaviorUtility@@YA?AUPaddleForces@1@AEAVVec3@@MMM@Z
MCAPI struct PaddleBehaviorUtility::PaddleForces computePaddleForcesBasedOnGaze(class Vec3&, float, float, float);

// symbol: ?setPaddleForce@PaddleBehaviorUtility@@YA_NAEAUPaddle@@AEBUTick@@M@Z
MCAPI bool setPaddleForce(struct Paddle&, struct Tick const&, float);

// symbol: ?setPaddleState@PaddleBehaviorUtility@@YA_NAEAUPaddle@@UTick@@_N@Z
MCAPI bool setPaddleState(struct Paddle&, struct Tick, bool);
// NOLINTEND

}; // namespace PaddleBehaviorUtility
