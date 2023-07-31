#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename... T0> struct Exclude;
template<typename... T0> struct Include;
// clang-format on

namespace FlagPassengerRemovalSystemImpl {
// NOLINTBEGIN
/**
 * @symbol
 * ?deferredPassengerRemoval\@FlagPassengerRemovalSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUVehicleComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@$$CBUPassengerComponent\@\@$$CBUActorUniqueIDComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPendingRemovePassengersComponent\@\@\@\@\@Z
 */
MCAPI void
deferredPassengerRemoval(class StrictEntityContext const&, struct VehicleComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>, struct PassengerComponent const, struct ActorUniqueIDComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent>);
/**
 * @symbol
 * ?immediatePassengerRemoval\@FlagPassengerRemovalSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUVehicleComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@URemovePassengersComponent\@\@\@\@\@Z
 */
MCAPI void immediatePassengerRemoval(class StrictEntityContext const&, struct VehicleComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RemovePassengersComponent>);
/**
 * @symbol
 * ?singleImmediatePassengerRemoval\@FlagPassengerRemovalSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@URemovePassengersComponent\@\@\@\@\@Z
 */
MCAPI void
singleImmediatePassengerRemoval(class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RemovePassengersComponent>);
/**
 * @symbol
 * ?singleTickDeferredPassengerRemoval\@FlagPassengerRemovalSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@$$CBUPassengerComponent\@\@$$CBUActorUniqueIDComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPendingRemovePassengersComponent\@\@\@\@\@Z
 */
MCAPI void
singleTickDeferredPassengerRemoval(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>, struct PassengerComponent const, struct ActorUniqueIDComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent>);
// NOLINTEND

}; // namespace FlagPassengerRemovalSystemImpl
