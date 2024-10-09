#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerResetMovementSpeedSystemImpl {
// NOLINTBEGIN
MCAPI void _doPlayerResetMovementSpeedSystem(
    struct MovementAttributesComponent const& attributesComponent,
    struct MovementSpeedComponent&            movementSpeedComponent
);
// NOLINTEND

}; // namespace PlayerResetMovementSpeedSystemImpl
