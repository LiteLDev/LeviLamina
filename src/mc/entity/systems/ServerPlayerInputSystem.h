#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace ServerPlayerInputSystem {
// NOLINTBEGIN
// symbol:
// ?_tickPlayerMovement@ServerPlayerInputSystem@@YAXAEAVStrictEntityContext@@AEBUPlayerCurrentTickComponent@@AEAUServerPlayerMovementComponent@@V?$EntityModifier@UServerPlayerCurrentMovementComponent@@UServerPlayerMoveAbsoluteComponent@@UServerPlayerInventoryTransactionComponent@@@@@Z
MCAPI void
_tickPlayerMovement(class StrictEntityContext&, struct PlayerCurrentTickComponent const&, struct ServerPlayerMovementComponent&, class EntityModifier<struct ServerPlayerCurrentMovementComponent, struct ServerPlayerMoveAbsoluteComponent, struct ServerPlayerInventoryTransactionComponent>);

// symbol: ?create@ServerPlayerInputSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo create();

// symbol:
// ?onInventoryTransactionPacket@ServerPlayerInputSystem@@YA_NAEAUServerPlayerMovementComponent@@V?$shared_ptr@VInventoryTransactionPacket@@@std@@@Z
MCAPI bool
onInventoryTransactionPacket(struct ServerPlayerMovementComponent&, std::shared_ptr<class InventoryTransactionPacket>);

// symbol:
// ?onMoveActorAbsolutePacket@ServerPlayerInputSystem@@YA_NAEAUServerPlayerMovementComponent@@AEBVMoveActorAbsolutePacket@@@Z
MCAPI bool onMoveActorAbsolutePacket(struct ServerPlayerMovementComponent&, class MoveActorAbsolutePacket const&);

// symbol:
// ?onPlayerAuthInputPacket@ServerPlayerInputSystem@@YA_NAEAUServerPlayerMovementComponent@@AEBVPlayerAuthInputPacket@@@Z
MCAPI bool onPlayerAuthInputPacket(struct ServerPlayerMovementComponent&, class PlayerAuthInputPacket const&);
// NOLINTEND

}; // namespace ServerPlayerInputSystem
