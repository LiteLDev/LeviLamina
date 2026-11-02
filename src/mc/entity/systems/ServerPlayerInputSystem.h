#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class InteractPacket;
class InventoryPacketHandler;
class StrictEntityContext;
struct ServerPlayerCurrentMovementComponent;
struct ServerPlayerInteractComponent;
struct ServerPlayerInventoryTransactionComponent;
struct ServerPlayerMovementComponent;
// clang-format on

namespace ServerPlayerInputSystem {
// functions
// NOLINTBEGIN
MCNAPI void _tickPlayerMovement(
    ::StrictEntityContext&           entity,
    ::ServerPlayerMovementComponent& serverPlayerMovement,
    ::EntityModifier<
        ::ServerPlayerCurrentMovementComponent,
        ::ServerPlayerInventoryTransactionComponent,
        ::ServerPlayerInteractComponent> const& modifier
);

MCNAPI bool onInteractPacket(::ServerPlayerMovementComponent& component, ::InteractPacket const& packet);

MCNAPI bool onInventoryTransactionPacket(::ServerPlayerMovementComponent& component, ::InventoryPacketHandler packet);

MCAPI void transferInteractPackets(::ServerPlayerMovementComponent& movementComponent, ::EntityContext& entity);
// NOLINTEND

} // namespace ServerPlayerInputSystem
