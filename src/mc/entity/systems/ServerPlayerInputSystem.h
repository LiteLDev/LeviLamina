#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class InteractPacket;
class InventoryTransactionPacket;
class PlayerAuthInputPacket;
class StrictEntityContext;
struct ServerPlayerCurrentMovementComponent;
struct ServerPlayerInteractComponent;
struct ServerPlayerInventoryTransactionComponent;
struct ServerPlayerMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ServerPlayerInputSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickPlayerMovement(
    ::StrictEntityContext&           entity,
    ::ServerPlayerMovementComponent& serverPlayerMovement,
    ::EntityModifier<
        ::ServerPlayerCurrentMovementComponent,
        ::ServerPlayerInventoryTransactionComponent,
        ::ServerPlayerInteractComponent> modifier
);

MCAPI ::TickingSystemWithInfo create();

MCAPI bool onInteractPacket(::ServerPlayerMovementComponent& component, ::InteractPacket const& packet);

MCAPI bool onInventoryTransactionPacket(
    ::ServerPlayerMovementComponent&                component,
    ::std::shared_ptr<::InventoryTransactionPacket> packet
);

MCAPI bool onPlayerAuthInputPacket(::ServerPlayerMovementComponent& component, ::PlayerAuthInputPacket const& packet);

MCAPI void transferInteractPackets(::ServerPlayerMovementComponent& movementComponent, ::EntityContext& entity);
// NOLINTEND

} // namespace ServerPlayerInputSystem
