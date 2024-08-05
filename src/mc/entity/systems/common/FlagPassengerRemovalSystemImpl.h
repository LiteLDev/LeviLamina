#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace FlagPassengerRemovalSystemImpl {
// NOLINTBEGIN
MCAPI void deferredPassengerRemoval(class StrictEntityContext const&, struct VehicleComponent const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>, struct PassengerComponent const, struct ActorUniqueIDComponent const>, class EntityModifier<struct PendingRemovePassengersComponent>);

MCAPI void immediatePassengerRemoval(class StrictEntityContext const&, struct VehicleComponent const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class EntityModifier<struct RemovePassengersComponent>);

MCAPI void singleTickDeferredPassengerRemoval(class StrictEntityContext const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>, struct PassengerComponent const, struct ActorUniqueIDComponent const>, class EntityModifier<struct PendingRemovePassengersComponent>);

MCAPI void
singleTickImmediatePassengerRemoval(class StrictEntityContext const&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct PassengerComponent const>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class EntityModifier<struct RemovePassengersComponent>);

MCAPI void tickDeferredPassengerRemoval(class ViewT<class StrictEntityContext, struct VehicleComponent const>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>, struct PassengerComponent const, struct ActorUniqueIDComponent const>, class EntityModifier<struct PendingRemovePassengersComponent>);

MCAPI void
    tickImmediatePassengerRemoval(class ViewT<class StrictEntityContext, struct VehicleComponent const>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class EntityModifier<struct RemovePassengersComponent>);
// NOLINTEND

}; // namespace FlagPassengerRemovalSystemImpl
