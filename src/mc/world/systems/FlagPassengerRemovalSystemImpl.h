#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace FlagPassengerRemovalSystemImpl {
// NOLINTBEGIN
// symbol:
// ?deferredPassengerRemoval@FlagPassengerRemovalSystemImpl@@YAXAEBVStrictEntityContext@@AEBUVehicleComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UStopRidingRequestFlag@@@@@@U?$Exclude@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@V?$FlagComponent@USwitchingVehiclesFlag@@@@@@$$CBUPassengerComponent@@$$CBUActorUniqueIDComponent@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UPendingRemovePassengersComponent@@@@@Z
MCAPI void
deferredPassengerRemoval(class StrictEntityContext const&, struct VehicleComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>, struct PassengerComponent const, struct ActorUniqueIDComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent>);

// symbol:
// ?immediatePassengerRemoval@FlagPassengerRemovalSystemImpl@@YAXAEBVStrictEntityContext@@AEBUVehicleComponent@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@USwitchingVehiclesFlag@@@@@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@URemovePassengersComponent@@@@@Z
MCAPI void immediatePassengerRemoval(class StrictEntityContext const&, struct VehicleComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RemovePassengersComponent>);

// symbol:
// ?singleTickDeferredPassengerRemoval@FlagPassengerRemovalSystemImpl@@YAXAEBVStrictEntityContext@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UStopRidingRequestFlag@@@@@@U?$Exclude@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@V?$FlagComponent@USwitchingVehiclesFlag@@@@@@$$CBUPassengerComponent@@$$CBUActorUniqueIDComponent@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UPendingRemovePassengersComponent@@@@@Z
MCAPI void
singleTickDeferredPassengerRemoval(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>, struct PassengerComponent const, struct ActorUniqueIDComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent>);

// symbol:
// ?singleTickImmediatePassengerRemoval@FlagPassengerRemovalSystemImpl@@YAXAEBVStrictEntityContext@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UStopRidingRequestFlag@@@@@@$$CBUPassengerComponent@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@UActorIsBeingDestroyedFlag@@@@@@@@V?$ViewT@VStrictEntityContext@@VEntityRegistryBase@@U?$Include@V?$FlagComponent@UStopRidingRequestFlag@@@@V?$FlagComponent@USwitchingVehiclesFlag@@@@@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@URemovePassengersComponent@@@@@Z
MCAPI void
singleTickImmediatePassengerRemoval(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct PassengerComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RemovePassengersComponent>);
// NOLINTEND

}; // namespace FlagPassengerRemovalSystemImpl
