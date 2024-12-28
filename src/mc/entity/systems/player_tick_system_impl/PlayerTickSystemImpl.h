#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
struct PassengerComponent;
struct PlayerTickComponent;
struct ServerPlayerMovementComponent;
// clang-format on

namespace PlayerTickSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void _addMovementTickNeededForCatchup(
    ::StrictEntityContext const&                         entity,
    ::PlayerTickComponent const&                         playerTick,
    ::ServerPlayerMovementComponent const&               serverPlayerMovement,
    ::Optional<::PassengerComponent const> const&        passengerComponent,
    ::EntityModifier<::ActorMovementTickNeededComponent> modifier
);
// NOLINTEND

} // namespace PlayerTickSystemImpl
