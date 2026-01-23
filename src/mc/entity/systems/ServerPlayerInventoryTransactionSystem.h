#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class BlockPalette;
class InventoryTransactionPacket;
class ServerPlayer;
class StrictEntityContext;
struct ActorRotationComponent;
struct CameraAimAssistComponent;
struct MoveInputComponent;
struct ServerPlayerInventoryTransactionComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ServerPlayerInventoryTransactionSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createSystem();

MCNAPI void tickInventoryTransactionSystem(
    ::StrictEntityContext const&                                  entity,
    ::ServerPlayerInventoryTransactionComponent const&            inventoryTransaction,
    ::MoveInputComponent const&                                   moveInput,
    ::ActorRotationComponent&                                     actorRotation,
    ::ActorOwnerComponent&                                        actorOwnerComponent,
    ::Optional<::CameraAimAssistComponent const>                  cameraAimAssist,
    ::EntityModifier<::ServerPlayerInventoryTransactionComponent> modifier
);

MCNAPI void transactInventoryPacket(
    ::InventoryTransactionPacket const& packet,
    ::ServerPlayer&                     player,
    ::BlockPalette&                     blockPalette
);
// NOLINTEND

} // namespace ServerPlayerInventoryTransactionSystem
