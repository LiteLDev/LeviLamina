#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace ServerPlayerInventoryTransactionSystem {
// NOLINTBEGIN
// symbol: ?createSystem@ServerPlayerInventoryTransactionSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?tickInventoryTransactionSystem@ServerPlayerInventoryTransactionSystem@@YAXU?$type_list@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@@@@entt@@AEBVStrictEntityContext@@AEBUServerPlayerInventoryTransactionComponent@@AEAVActorOwnerComponent@@V?$EntityModifier@UServerPlayerInventoryTransactionComponent@@@@@Z
MCAPI void
tickInventoryTransactionSystem(entt::type_list<struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>>, class StrictEntityContext const&, struct ServerPlayerInventoryTransactionComponent const&, class ActorOwnerComponent&, class EntityModifier<struct ServerPlayerInventoryTransactionComponent>);

// symbol:
// ?transactInventoryPacket@ServerPlayerInventoryTransactionSystem@@YAXAEBVInventoryTransactionPacket@@AEAVServerPlayer@@AEAVBlockPalette@@@Z
MCAPI void transactInventoryPacket(class InventoryTransactionPacket const&, class ServerPlayer&, class BlockPalette&);
// NOLINTEND

}; // namespace ServerPlayerInventoryTransactionSystem
