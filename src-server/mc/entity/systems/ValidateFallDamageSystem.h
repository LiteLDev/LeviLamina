#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
struct FallDamageResultComponent;
struct PassengerComponent;
struct ServerPlayerCurrentMovementComponent;
struct TickingSystemWithInfo;
struct VehicleInputIntentComponent;
// clang-format on

namespace ValidateFallDamageSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void doValidateFallDamage(
    ::EventingDispatcherComponent const&                            eventingDispatcherComponent,
    ::Optional<::ServerPlayerCurrentMovementComponent const> const& serverPlayerCurrentMovementComponent,
    ::Optional<::FallDamageResultComponent const> const&            playerFallDamageResultComponent,
    ::Optional<::PassengerComponent const> const&                   passengerComponent,
    ::ViewT<::StrictEntityContext, ::VehicleInputIntentComponent const, ::FallDamageResultComponent const> vehicleView,
    ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent> requestQueueView
);
// NOLINTEND

} // namespace ValidateFallDamageSystem
