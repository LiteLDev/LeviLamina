/**
 * @file  FlagPassengerRemovalSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace FlagPassengerRemovalSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?deferredPassengerRemoval\@FlagPassengerRemovalSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUVehicleComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@$$CBUPassengerComponent\@\@$$CBUActorUniqueIDComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPendingRemovePassengersComponent\@\@\@\@\@Z
     */
    MCAPI void deferredPassengerRemoval(class StrictEntityContext const &, struct VehicleComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>, struct PassengerComponent const, struct ActorUniqueIDComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent>);
    /**
     * @symbol ?immediatePassengerRemoval\@FlagPassengerRemovalSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUVehicleComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@URemovePassengersComponent\@\@\@\@\@Z
     */
    MCAPI void immediatePassengerRemoval(class StrictEntityContext const &, struct VehicleComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RemovePassengersComponent>);
    /**
     * @symbol ?singleImmediatePassengerRemoval\@FlagPassengerRemovalSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@URemovePassengersComponent\@\@\@\@\@Z
     */
    MCAPI void singleImmediatePassengerRemoval(class StrictEntityContext const &, struct PassengerComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct ActorIsBeingDestroyedFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct RemovePassengersComponent>);
    /**
     * @symbol ?singleTickDeferredPassengerRemoval\@FlagPassengerRemovalSystemImpl\@\@YAXAEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@\@\@U?$Exclude\@V?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@$$CBUPassengerComponent\@\@$$CBUActorUniqueIDComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPendingRemovePassengersComponent\@\@\@\@\@Z
     */
    MCAPI void singleTickDeferredPassengerRemoval(class StrictEntityContext const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct StopRidingRequestFlag>>, struct Exclude<class FlagComponent<struct ActorIsBeingDestroyedFlag>, class FlagComponent<struct SwitchingVehiclesFlag>>, struct PassengerComponent const, struct ActorUniqueIDComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PendingRemovePassengersComponent>);

};