#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace ServerPlayerInputSystem {
// NOLINTBEGIN
MCAPI void
_tickPlayerMovement(class StrictEntityContext&, struct PlayerCurrentTickComponent const&, struct ServerPlayerMovementComponent&, class EntityModifier<struct ServerPlayerCurrentMovementComponent, struct ServerPlayerMoveAbsoluteComponent, struct ServerPlayerInventoryTransactionComponent, struct ServerPlayerInteractComponent>);

MCAPI struct TickingSystemWithInfo create();

MCAPI bool onInteractPacket(struct ServerPlayerMovementComponent&, class InteractPacket const&);

MCAPI bool
onInventoryTransactionPacket(struct ServerPlayerMovementComponent&, std::shared_ptr<class InventoryTransactionPacket>);

MCAPI bool onMoveActorAbsolutePacket(struct ServerPlayerMovementComponent&, class MoveActorAbsolutePacket const&);

MCAPI bool
onPlayerAuthInputPacket(struct ServerPlayerMovementComponent& component, class PlayerAuthInputPacket const& packet);

MCAPI void transferInteractPackets(struct ServerPlayerMovementComponent&, class EntityContext&);
// NOLINTEND

}; // namespace ServerPlayerInputSystem
