#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace FlagPassengerRemovalSystemImpl {
// NOLINTBEGIN
MCAPI void deferredPassengerRemoval(
    class StrictEntityContext const& vehicleEntity,
    struct VehicleComponent const&   vehicleComponent,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct StopRidingRequestFlag>>,
        struct Exclude<
            class FlagComponent<struct ActorIsBeingDestroyedFlag>,
            class FlagComponent<struct SwitchingVehiclesFlag>>,
        struct PassengerComponent const,
        struct ActorUniqueIDComponent const>                      passengersToRemove,
    class EntityModifier<struct PendingRemovePassengersComponent> modifier
);

MCAPI void immediatePassengerRemoval(
    class StrictEntityContext const& vehicleEntity,
    struct VehicleComponent const&   vehicleComponent,
    class ViewT<
        class StrictEntityContext,
        struct Include<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct ActorIsBeingDestroyedFlag>>> destroyedPassengersToRemove,
    class ViewT<
        class StrictEntityContext,
        struct Include<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct SwitchingVehiclesFlag>>> switchingVehiclePassengersToRemove,
    class EntityModifier<struct RemovePassengersComponent>      modifier
);

MCAPI void singleTickDeferredPassengerRemoval(
    class StrictEntityContext const& entity,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct StopRidingRequestFlag>>,
        struct Exclude<
            class FlagComponent<struct ActorIsBeingDestroyedFlag>,
            class FlagComponent<struct SwitchingVehiclesFlag>>,
        struct PassengerComponent const,
        struct ActorUniqueIDComponent const>                      view,
    class EntityModifier<struct PendingRemovePassengersComponent> modifier
);

MCAPI void singleTickImmediatePassengerRemoval(
    class StrictEntityContext const& entity,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct StopRidingRequestFlag>>,
        struct PassengerComponent const> view,
    class ViewT<
        class StrictEntityContext,
        struct Include<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct ActorIsBeingDestroyedFlag>>> destroyedPassengers,
    class ViewT<
        class StrictEntityContext,
        struct Include<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct SwitchingVehiclesFlag>>> switchingVehiclePassengers,
    class EntityModifier<struct RemovePassengersComponent>      modifier
);

MCAPI void tickDeferredPassengerRemoval(
    class ViewT<class StrictEntityContext, struct VehicleComponent const> view,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct StopRidingRequestFlag>>,
        struct Exclude<
            class FlagComponent<struct ActorIsBeingDestroyedFlag>,
            class FlagComponent<struct SwitchingVehiclesFlag>>,
        struct PassengerComponent const,
        struct ActorUniqueIDComponent const>                      passengersToRemove,
    class EntityModifier<struct PendingRemovePassengersComponent> modifier
);

MCAPI void tickImmediatePassengerRemoval(
    class ViewT<class StrictEntityContext, struct VehicleComponent const> view,
    class ViewT<
        class StrictEntityContext,
        struct Include<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct ActorIsBeingDestroyedFlag>>> destroyedPassengers,
    class ViewT<
        class StrictEntityContext,
        struct Include<
            class FlagComponent<struct StopRidingRequestFlag>,
            class FlagComponent<struct SwitchingVehiclesFlag>>> switchingVehiclePassengers,
    class EntityModifier<struct RemovePassengersComponent>      modifier
);
// NOLINTEND

}; // namespace FlagPassengerRemovalSystemImpl
