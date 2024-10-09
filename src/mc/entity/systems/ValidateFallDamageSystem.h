#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"

namespace ValidateFallDamageSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void doValidateFallDamage(
    struct EventingDispatcherComponent const&                                eventingDispatcherComponent,
    class Optional<struct ServerPlayerCurrentMovementComponent const> const& serverPlayerCurrentMovementComponent,
    class Optional<struct FallDamageResultComponent const> const&            playerFallDamageResultComponent,
    class Optional<struct PassengerComponent const> const&                   passengerComponent,
    class ViewT<
        class StrictEntityContext,
        struct VehicleInputIntentComponent const,
        struct FallDamageResultComponent const>                                  vehicleView,
    class ViewT<class StrictEntityContext, struct EventingRequestQueueComponent> requestQueueView
);
// NOLINTEND

}; // namespace ValidateFallDamageSystem
