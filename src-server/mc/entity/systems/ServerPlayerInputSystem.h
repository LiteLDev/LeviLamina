#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class InteractPacket;
class InventoryPacket;
class PlayerAuthInputPacket;
class StrictEntityContext;
struct ActorMovementTickNeededComponent;
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

MCAPI void _tickServerPlayerInputSystem(
    ::ViewT<::StrictEntityContext, ::ActorMovementTickNeededComponent const, ::ServerPlayerMovementComponent> view,
    ::EntityModifier<
        ::ServerPlayerCurrentMovementComponent,
        ::ServerPlayerInventoryTransactionComponent,
        ::ServerPlayerInteractComponent> modifier
);

MCAPI ::TickingSystemWithInfo create();

MCAPI bool onInteractPacket(::ServerPlayerMovementComponent& component, ::InteractPacket const& packet);

MCAPI bool
onInventoryTransactionPacket(::ServerPlayerMovementComponent& component, ::std::shared_ptr<::InventoryPacket> packet);

MCAPI bool onPlayerAuthInputPacket(::ServerPlayerMovementComponent& component, ::PlayerAuthInputPacket const& packet);
// NOLINTEND

} // namespace ServerPlayerInputSystem
