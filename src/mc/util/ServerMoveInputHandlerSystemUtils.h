#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

namespace ServerMoveInputHandlerSystemUtils {
// NOLINTBEGIN
MCAPI void _tickServerMoveInputHandler(
    class StrictEntityContext&,
    struct MovementAbilitiesComponent const&                           abilitiesComponent,
    struct ServerPlayerCurrentMovementComponent const&                 serverPlayerCurrentMovementComponent,
    struct ClientInputLockComponent&                                   lockComponent,
    struct MoveInputComponent&                                         input,
    struct ActorDataFlagComponent&                                     actorDataFlag,
    struct ActorDataDirtyFlagsComponent&                               actorDataDirtyFlags,
    struct VanillaClientGameplayComponent&                             vanillaClientGameplayComponent,
    class Optional<struct SneakingComponent const>                     sneakingComponent,
    class Optional<class FlagComponent<struct InWaterFlag> const>      isInWater,
    class OptionalGlobal<class PlayerMovementSettingsComponent const>& playerMovementSettingsComponent
);
// NOLINTEND

}; // namespace ServerMoveInputHandlerSystemUtils
