#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Paddle;
struct Tick;
// clang-format on

namespace PaddleBehaviorUtility {
// functions
// NOLINTBEGIN
MCNAPI void setPaddleForce(::Paddle& boatPaddle, ::Tick const& currentTick, float force);

MCNAPI void setPaddleState(::Paddle& boatPaddle, ::Tick const& currentTick, bool pressed);
// NOLINTEND

} // namespace PaddleBehaviorUtility
