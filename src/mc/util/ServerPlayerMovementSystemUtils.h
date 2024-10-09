#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

namespace ServerPlayerMovementSystemUtils {
// NOLINTBEGIN
MCAPI void _tickResetFallDistanceSystem(
    entt::type_list<struct Include<
        class FlagComponent<struct ActorMovementTickNeededFlag>,
        struct ServerPlayerCurrentMovementComponent>>,
    class ActorOwnerComponent const&   actorOwnerComponent,
    struct StateVectorComponent const& stateVectorComponent,
    struct FallDistanceComponent&      fallDistanceComponent
);

MCAPI void checkCheatingIfSupported(
    class ActorOwnerComponent&                               actorOwnerComponent,
    struct ServerPlayerCurrentMovementComponent const&       serverPlayerCurrentMovement,
    struct ActorDataFlagComponent const&                     synchedActorData,
    class Optional<struct PassengerComponent const> const&   passengerComponent,
    class Optional<struct StateVectorComponent const> const& stateVectorComponent,
    class ViewT<class StrictEntityContext, struct VehicleInputIntentComponent, class ActorOwnerComponent> const&
                                                                      vehicleView,
    class OptionalGlobal<class PlayerMovementSettingsComponent const> playerMovementSettings
);
// NOLINTEND

}; // namespace ServerPlayerMovementSystemUtils
