#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerPlayerInventoryTransactionSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void transactInventoryPacket(class InventoryTransactionPacket const&, class ServerPlayer&, class BlockPalette&);

MCAPI void transferInventoryTransactionPackets(struct ServerPlayerMovementComponent&, class EntityContext&);
// NOLINTEND

}; // namespace ServerPlayerInventoryTransactionSystem
