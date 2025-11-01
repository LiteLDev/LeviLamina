#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ActorMovementTickNeededComponent;
struct ClientInputLockComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct PlayerComponent;
struct ServerPlayerCurrentMovementComponent;
struct SneakingComponent;
struct VanillaClientGameplayComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace ServerMoveInputHandlerSystemUtils {
// functions
// NOLINTBEGIN
MCAPI void _tickServerMoveInputHandler(::StrictEntityContext&, ::MovementAbilitiesComponent const& abilitiesComponent, ::ServerPlayerCurrentMovementComponent const& serverPlayerCurrentMovementComponent, ::ClientInputLockComponent& lockComponent, ::MoveInputComponent& input, ::ActorDataFlagComponent& actorDataFlag, ::ActorDataDirtyFlagsComponent& actorDataDirtyFlags, ::VanillaClientGameplayComponent& vanillaClientGameplayComponent, ::Optional<::SneakingComponent const> sneakingComponent, ::Optional<::WasInWaterFlagComponent const> isInWater);

MCAPI void _tickServerMoveInputHandlerSystem(::ViewT<::StrictEntityContext, ::Include<::ActorMovementTickNeededComponent const, ::PlayerComponent const>, ::MovementAbilitiesComponent const, ::ServerPlayerCurrentMovementComponent const, ::ClientInputLockComponent, ::MoveInputComponent, ::ActorDataFlagComponent, ::ActorDataDirtyFlagsComponent, ::VanillaClientGameplayComponent, ::Optional<::SneakingComponent const>, ::Optional<::WasInWaterFlagComponent const>> view);
// NOLINTEND

}
