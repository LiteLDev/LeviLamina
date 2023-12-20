#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Exclude.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace SetActorLinkPacketSystemImpl {
// NOLINTBEGIN
// symbol:
// ?sendActorLinkPacket@SetActorLinkPacketSystemImpl@@YAXAEBVStrictEntityContext@@AEBUActorUniqueIDComponent@@AEBURemovePassengersComponent@@V?$ViewT@VStrictEntityContext@@U?$Exclude@V?$FlagComponent@USwitchingVehiclesFlag@@@@@@$$CBUActorUniqueIDComponent@@V?$Optional@$$CBV?$FlagComponent@UActorIsBeingDestroyedFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UExitFromPassengerFlag@@@@@@@@V?$EntityModifier@USendPacketsComponent@@@@@Z
MCAPI void sendActorLinkPacket(class StrictEntityContext const&, struct ActorUniqueIDComponent const&, struct RemovePassengersComponent const&, class ViewT<class StrictEntityContext, struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>, struct ActorUniqueIDComponent const, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>>, class EntityModifier<struct SendPacketsComponent>);

// symbol:
// ?singleSendActorLinkPacket@SetActorLinkPacketSystemImpl@@YAXAEBVStrictEntityContext@@AEBUPassengerComponent@@V?$ViewT@VStrictEntityContext@@$$CBUActorUniqueIDComponent@@URemovePassengersComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Exclude@V?$FlagComponent@USwitchingVehiclesFlag@@@@@@$$CBUActorUniqueIDComponent@@V?$Optional@$$CBV?$FlagComponent@UActorIsBeingDestroyedFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UExitFromPassengerFlag@@@@@@@@V?$EntityModifier@USendPacketsComponent@@@@@Z
MCAPI void singleSendActorLinkPacket(class StrictEntityContext const&, struct PassengerComponent const&, class ViewT<class StrictEntityContext, struct ActorUniqueIDComponent const, struct RemovePassengersComponent>, class ViewT<class StrictEntityContext, struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>, struct ActorUniqueIDComponent const, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>>, class EntityModifier<struct SendPacketsComponent>);

// symbol:
// ?tickSendActorLinkPacket@SetActorLinkPacketSystemImpl@@YAXV?$ViewT@VStrictEntityContext@@$$CBUActorUniqueIDComponent@@URemovePassengersComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Exclude@V?$FlagComponent@USwitchingVehiclesFlag@@@@@@$$CBUActorUniqueIDComponent@@V?$Optional@$$CBV?$FlagComponent@UActorIsBeingDestroyedFlag@@@@@@V?$Optional@$$CBV?$FlagComponent@UExitFromPassengerFlag@@@@@@@@V?$EntityModifier@USendPacketsComponent@@@@@Z
MCAPI void
    tickSendActorLinkPacket(class ViewT<class StrictEntityContext, struct ActorUniqueIDComponent const, struct RemovePassengersComponent>, class ViewT<class StrictEntityContext, struct Exclude<class FlagComponent<struct SwitchingVehiclesFlag>>, struct ActorUniqueIDComponent const, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>>, class EntityModifier<struct SendPacketsComponent>);
// NOLINTEND

}; // namespace SetActorLinkPacketSystemImpl
