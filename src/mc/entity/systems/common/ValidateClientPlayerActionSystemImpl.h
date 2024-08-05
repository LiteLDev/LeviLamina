#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace ValidateClientPlayerActionSystemImpl {
// NOLINTBEGIN
MCAPI void filterPlayerActionComparison(
    class StrictEntityContext const&,
    struct PlayerActionComponent const&,
    struct ServerPlayerCurrentMovementComponent&,
    class EntityModifier<struct PlayerActionAcceptanceComponent>,
    bool
);
// NOLINTEND

}; // namespace ValidateClientPlayerActionSystemImpl
