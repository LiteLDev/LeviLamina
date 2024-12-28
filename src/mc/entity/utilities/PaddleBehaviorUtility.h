#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct Paddle;
struct Tick;
// clang-format on

namespace PaddleBehaviorUtility {
// functions
// NOLINTBEGIN
MCAPI ::std::array<float, 2>
computePaddleForcesBasedOnGaze(::Vec3& inGazeDir, float forceLength, float facingOffsetFactor, float yRot);

MCAPI void setPaddleForce(::Paddle& boatPaddle, ::Tick const& currentTick, float force);

MCAPI void setPaddleState(::Paddle& boatPaddle, ::Tick const& currentTick, bool pressed);
// NOLINTEND

} // namespace PaddleBehaviorUtility
