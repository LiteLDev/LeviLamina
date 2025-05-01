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
struct ServerPlayerMovementComponent;
// clang-format on

namespace PlayerTickSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void _addMovementTickNeededForCatchup(
    ::StrictEntityContext const&                         entity,
    ::ServerPlayerMovementComponent const&               serverPlayerMovement,
    ::Optional<::PassengerComponent const> const&        passengerComponent,
    ::EntityModifier<::ActorMovementTickNeededComponent> modifier
);
// NOLINTEND

} // namespace PlayerTickSystemImpl
