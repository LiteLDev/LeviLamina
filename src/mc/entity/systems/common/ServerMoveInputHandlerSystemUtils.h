#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/world/components/FlagComponent.h"

namespace ServerMoveInputHandlerSystemUtils {
// NOLINTBEGIN
MCAPI void
_tickServerMoveInputHandler(class StrictEntityContext&, struct MovementAbilitiesComponent const&, struct ServerPlayerCurrentMovementComponent const&, struct ClientInputLockComponent&, struct MoveInputComponent&, struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, struct VanillaClientGameplayComponent&, class Optional<struct SneakingComponent const>, class Optional<class FlagComponent<struct InWaterFlag> const>, class OptionalGlobal<class PlayerMovementSettingsComponent const>&);
// NOLINTEND

}; // namespace ServerMoveInputHandlerSystemUtils
