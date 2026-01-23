#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct EventingDispatcherComponent;
struct EventingRequestQueueComponent;
struct FallDamageResultComponent;
struct PassengerComponent;
struct ServerPlayerComponent;
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

MCNAPI void singleTick(
    ::StrictEntityContext& entity,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ServerPlayerComponent>,
        ::EventingDispatcherComponent const,
        ::Optional<::ServerPlayerCurrentMovementComponent const>,
        ::Optional<::FallDamageResultComponent const>,
        ::Optional<::PassengerComponent const>>                                                            mainView,
    ::ViewT<::StrictEntityContext, ::VehicleInputIntentComponent const, ::FallDamageResultComponent const> vehicleView,
    ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent>   requestQueueView,
    ::ViewT<::StrictEntityContext, ::FallDamageResultComponent const> fallDamageView
);

MCNAPI void tick(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::ServerPlayerComponent>,
        ::EventingDispatcherComponent const,
        ::Optional<::ServerPlayerCurrentMovementComponent const>,
        ::Optional<::FallDamageResultComponent const>,
        ::Optional<::PassengerComponent const>>                                                            mainView,
    ::ViewT<::StrictEntityContext, ::VehicleInputIntentComponent const, ::FallDamageResultComponent const> vehicleView,
    ::ViewT<::StrictEntityContext, ::EventingRequestQueueComponent>   requestQueueView,
    ::ViewT<::StrictEntityContext, ::FallDamageResultComponent const> fallDamageView
);
// NOLINTEND

} // namespace ValidateFallDamageSystem
