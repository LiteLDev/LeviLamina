#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPalette;
class EntityContext;
class InventoryTransactionPacket;
class ServerPlayer;
struct ServerPlayerMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ServerPlayerInventoryTransactionSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void transactInventoryPacket(
    ::InventoryTransactionPacket const& packet,
    ::ServerPlayer&                     player,
    ::BlockPalette&                     blockPalette
);

MCNAPI void
transferInventoryTransactionPackets(::ServerPlayerMovementComponent const& movementComponent, ::EntityContext& entity);
// NOLINTEND

} // namespace ServerPlayerInventoryTransactionSystem
