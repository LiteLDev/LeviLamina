#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

namespace ServerPlayerInputSystem {
// NOLINTBEGIN
MCAPI void _tickPlayerMovement(
    class StrictEntityContext&               entity,
    struct PlayerCurrentTickComponent const& playerTickComponent,
    struct ServerPlayerMovementComponent&    serverPlayerMovement,
    class EntityModifier<
        struct ServerPlayerCurrentMovementComponent,
        struct ServerPlayerMoveAbsoluteComponent,
        struct ServerPlayerInventoryTransactionComponent,
        struct ServerPlayerInteractComponent> modifier
);

MCAPI struct TickingSystemWithInfo create();

MCAPI bool onInteractPacket(struct ServerPlayerMovementComponent& component, class InteractPacket const& packet);

MCAPI bool onInventoryTransactionPacket(
    struct ServerPlayerMovementComponent&             component,
    std::shared_ptr<class InventoryTransactionPacket> packet
);

MCAPI bool
onMoveActorAbsolutePacket(struct ServerPlayerMovementComponent& component, class MoveActorAbsolutePacket const& packet);

MCAPI bool
onPlayerAuthInputPacket(struct ServerPlayerMovementComponent& component, class PlayerAuthInputPacket const& packet);

MCAPI void
transferInteractPackets(struct ServerPlayerMovementComponent& movementComponent, class EntityContext& entity);
// NOLINTEND

}; // namespace ServerPlayerInputSystem
