#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace MobTravelUpdateSpeedsSystemImpl {
// NOLINTBEGIN
MCAPI void doUpdateMovementSpeed(
    class StrictEntityContext const&                                       context,
    struct ActorDataFlagComponent const&                                   actorDataFlagComponent,
    struct ActorDataControllingSeatIndexComponent const&                   controllingSeatIndexComponent,
    struct VehicleComponent const&                                         vehicleComponent,
    struct AirSpeedComponent&                                              flySpeedComponent,
    struct MovementAttributesComponent const&                              movementAttributesComponent,
    class Optional<class FlagComponent<struct CanVehicleSprintFlag> const> canVehicleSprintFlag,
    class ViewT<
        class StrictEntityContext,
        struct MovementAttributesComponent const,
        struct MovementSpeedComponent const> speedData,
    class ViewT<class StrictEntityContext, struct MovementSpeedComponent, struct LocalMoveVelocityComponent>
        mutableSpeedData,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> players,
    class ViewT<class StrictEntityContext, struct ActorDataFlagComponent const> actorDataView
);
// NOLINTEND

}; // namespace MobTravelUpdateSpeedsSystemImpl
