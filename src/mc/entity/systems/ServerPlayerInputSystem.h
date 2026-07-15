#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class InteractPacket;
class InventoryPacketHandler;
struct ServerPlayerMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ServerPlayerInputSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo create();

MCAPI bool onInteractPacket(::ServerPlayerMovementComponent& component, ::InteractPacket const& packet);

MCAPI bool onInventoryTransactionPacket(::ServerPlayerMovementComponent& component, ::InventoryPacketHandler packet);

MCAPI void transferInteractPackets(::ServerPlayerMovementComponent& movementComponent, ::EntityContext& entity);
// NOLINTEND

} // namespace ServerPlayerInputSystem
