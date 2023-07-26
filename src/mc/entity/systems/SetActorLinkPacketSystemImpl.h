#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0, typename T1, typename... T2> class ViewT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
template<typename... T0> struct Exclude;
// clang-format on

namespace SetActorLinkPacketSystemImpl {
/**
 * @symbol
 * ?sendActorLinkPacket\@SetActorLinkPacketSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUActorUniqueIDComponent\@\@AEBURemovePassengersComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Exclude\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@$$CBUActorUniqueIDComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@\@Z
 */
MCAPI void sendActorLinkPacket(class StrictEntityContext const&, struct ActorUniqueIDComponent const&, struct RemovePassengersComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>, struct ActorUniqueIDComponent const, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>); // NOLINT
/**
 * @symbol
 * ?singleSendActorLinkPacket\@SetActorLinkPacketSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUPassengerComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUActorUniqueIDComponent\@\@URemovePassengersComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Exclude\@V?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@$$CBUActorUniqueIDComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@USendPacketsComponent\@\@\@\@\@Z
 */
MCAPI void
singleSendActorLinkPacket(class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct ActorUniqueIDComponent const, struct RemovePassengersComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>, struct ActorUniqueIDComponent const, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct SendPacketsComponent>); // NOLINT

}; // namespace SetActorLinkPacketSystemImpl
