#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerRotationSystemImpl {
// NOLINTBEGIN
MCAPI void doPlayerRotationSystem(
    struct MoveInputComponent const& moveInputComponent,
    struct ActorRotationComponent&   actorRotationComponent
);
// NOLINTEND

}; // namespace PlayerRotationSystemImpl
