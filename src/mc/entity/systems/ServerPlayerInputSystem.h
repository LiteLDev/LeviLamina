#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace ServerPlayerInputSystem {
// NOLINTBEGIN
// symbol:
// ?_tickPlayerMovement@ServerPlayerInputSystem@@YAXAEAVStrictEntityContext@@AEBUPlayerCurrentTickComponent@@AEAUServerPlayerMovementComponent@@V?$EntityModifier@UServerPlayerCurrentMovementComponent@@UServerPlayerMoveAbsoluteComponent@@UServerPlayerInventoryTransactionComponent@@UServerPlayerInteractComponent@@@@@Z
MCAPI void
_tickPlayerMovement(class StrictEntityContext&, struct PlayerCurrentTickComponent const&, struct ServerPlayerMovementComponent&, class EntityModifier<struct ServerPlayerCurrentMovementComponent, struct ServerPlayerMoveAbsoluteComponent, struct ServerPlayerInventoryTransactionComponent, struct ServerPlayerInteractComponent>);

// symbol: ?create@ServerPlayerInputSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo create();

// symbol: ?onInteractPacket@ServerPlayerInputSystem@@YA_NAEAUServerPlayerMovementComponent@@AEBVInteractPacket@@@Z
MCAPI bool onInteractPacket(struct ServerPlayerMovementComponent&, class InteractPacket const&);

// symbol:
// ?onInventoryTransactionPacket@ServerPlayerInputSystem@@YA_NAEAUServerPlayerMovementComponent@@V?$shared_ptr@VInventoryTransactionPacket@@@std@@@Z
MCAPI bool
onInventoryTransactionPacket(struct ServerPlayerMovementComponent&, std::shared_ptr<class InventoryTransactionPacket>);

// symbol:
// ?onMoveActorAbsolutePacket@ServerPlayerInputSystem@@YA_NAEAUServerPlayerMovementComponent@@AEBVMoveActorAbsolutePacket@@@Z
MCAPI bool onMoveActorAbsolutePacket(struct ServerPlayerMovementComponent&, class MoveActorAbsolutePacket const&);

// symbol:
// ?onPlayerAuthInputPacket@ServerPlayerInputSystem@@YA_NAEAUServerPlayerMovementComponent@@AEBVPlayerAuthInputPacket@@@Z
MCAPI bool
onPlayerAuthInputPacket(struct ServerPlayerMovementComponent& component, class PlayerAuthInputPacket const& packet);
// NOLINTEND

}; // namespace ServerPlayerInputSystem
