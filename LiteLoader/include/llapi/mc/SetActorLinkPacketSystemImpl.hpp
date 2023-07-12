/**
 * @file  SetActorLinkPacketSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace SetActorLinkPacketSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?sendActorLinkPacket\@SetActorLinkPacketSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUActorUniqueIDComponent\@\@AEBURemovePassengersComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Exclude\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@$$CBUActorUniqueIDComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@\@Z
     */
    MCAPI void sendActorLinkPacket(class StrictEntityContext const &, struct ActorUniqueIDComponent const &, struct RemovePassengersComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>, struct ActorUniqueIDComponent const, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>);
    /**
     * @symbol ?singleSendActorLinkPacket\@SetActorLinkPacketSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUActorUniqueIDComponent\@\@URemovePassengersComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Exclude\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@$$CBUActorUniqueIDComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@\@Z
     */
    MCAPI void singleSendActorLinkPacket(class StrictEntityContext const &, struct PassengerComponent const &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorUniqueIDComponent const, struct RemovePassengersComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>, struct ActorUniqueIDComponent const, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>);

};