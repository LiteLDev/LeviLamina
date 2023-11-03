#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ServerPlayerInventoryTransactionSystem {
// NOLINTBEGIN
// symbol: ?createSystem@ServerPlayerInventoryTransactionSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?transactInventoryPacket@ServerPlayerInventoryTransactionSystem@@YAXAEBVInventoryTransactionPacket@@AEAVServerPlayer@@AEAVBlockPalette@@@Z
MCAPI void transactInventoryPacket(class InventoryTransactionPacket const&, class ServerPlayer&, class BlockPalette&);
// NOLINTEND

}; // namespace ServerPlayerInventoryTransactionSystem
