#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class PlayerMovementSettingsComponent;
class StrictEntityContext;
struct ActorDataFlagComponent;
struct PassengerComponent;
struct PlayerIsSleepingFlagComponent;
struct ServerPlayerCurrentMovementComponent;
struct StateVectorComponent;
struct VehicleInputIntentComponent;
// clang-format on

namespace ServerPlayerMovementSystemUtils {
// functions
// NOLINTBEGIN
MCAPI void checkCheatingIfSupported(
    ::ActorOwnerComponent&                                   actorOwnerComponent,
    ::ServerPlayerCurrentMovementComponent const&            serverPlayerCurrentMovement,
    ::ActorDataFlagComponent const&                          synchedActorData,
    ::Optional<::PassengerComponent const> const&            passengerComponent,
    ::Optional<::StateVectorComponent const> const&          stateVectorComponent,
    ::Optional<::PlayerIsSleepingFlagComponent const> const& playerIsSleeping,
    ::ViewT<::StrictEntityContext, ::VehicleInputIntentComponent, ::ActorOwnerComponent> const& vehicleView,
    ::OptionalGlobal<::PlayerMovementSettingsComponent const>                                   playerMovementSettings
);
// NOLINTEND

} // namespace ServerPlayerMovementSystemUtils
