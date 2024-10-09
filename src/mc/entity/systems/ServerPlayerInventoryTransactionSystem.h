#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerPlayerInventoryTransactionSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void transactInventoryPacket(
    class InventoryTransactionPacket const& packet,
    class ServerPlayer&                     player,
    class BlockPalette&                     blockPalette
);

MCAPI void transferInventoryTransactionPackets(
    struct ServerPlayerMovementComponent& movementComponent,
    class EntityContext&                  entity
);
// NOLINTEND

}; // namespace ServerPlayerInventoryTransactionSystem
