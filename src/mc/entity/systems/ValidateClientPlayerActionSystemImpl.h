#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

namespace ValidateClientPlayerActionSystemImpl {
// NOLINTBEGIN
MCAPI void filterPlayerActionComparison(
    class StrictEntityContext const&                             entity,
    struct PlayerActionComponent const&                          serverPlayerAction,
    struct ServerPlayerCurrentMovementComponent&                 serverPlayerCurrentMovement,
    class EntityModifier<struct PlayerActionAcceptanceComponent> mod,
    bool                                                         skipComparison
);
// NOLINTEND

}; // namespace ValidateClientPlayerActionSystemImpl
