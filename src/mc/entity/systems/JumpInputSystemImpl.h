#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace JumpInputSystemImpl {
// NOLINTBEGIN
MCAPI void doJumpInputSystem(
    class StrictEntityContext const&                                   context,
    struct MovementAbilitiesComponent const&                           abilitiesComponent,
    struct MoveInputComponent const&                                   moveInputComponent,
    class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>> mod
);
// NOLINTEND

}; // namespace JumpInputSystemImpl
