#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace ValidateClientPlayerActionSystemImpl {
// NOLINTBEGIN
// symbol:
// ?filterPlayerActionComparison@ValidateClientPlayerActionSystemImpl@@YAXAEBVStrictEntityContext@@AEBUPlayerActionComponent@@AEAUServerPlayerCurrentMovementComponent@@V?$EntityModifier@UPlayerActionAcceptanceComponent@@@@_N@Z
MCAPI void filterPlayerActionComparison(
    class StrictEntityContext const&,
    struct PlayerActionComponent const&,
    struct ServerPlayerCurrentMovementComponent&,
    class EntityModifier<struct PlayerActionAcceptanceComponent>,
    bool
);
// NOLINTEND

}; // namespace ValidateClientPlayerActionSystemImpl
