#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct ClientInputLockComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
struct ServerPlayerCurrentMovementComponent;
struct SneakingComponent;
struct VanillaClientGameplayComponent;
struct WasInWaterFlagComponent;
// clang-format on

namespace ServerMoveInputHandlerSystemUtils {
// functions
// NOLINTBEGIN
MCAPI void _tickServerMoveInputHandler(
    ::StrictEntityContext&                        abilitiesComponent,
    ::MovementAbilitiesComponent const&           serverPlayerCurrentMovementComponent,
    ::ServerPlayerCurrentMovementComponent const& lockComponent,
    ::ClientInputLockComponent&                   input,
    ::MoveInputComponent&                         actorDataFlag,
    ::ActorDataFlagComponent&                     actorDataDirtyFlags,
    ::ActorDataDirtyFlagsComponent&               vanillaClientGameplayComponent,
    ::VanillaClientGameplayComponent&             sneakingComponent,
    ::Optional<::SneakingComponent const>         isInWater,
    ::Optional<::WasInWaterFlagComponent const>
);
// NOLINTEND

} // namespace ServerMoveInputHandlerSystemUtils
