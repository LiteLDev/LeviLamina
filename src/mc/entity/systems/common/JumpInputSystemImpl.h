#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace JumpInputSystemImpl {
// NOLINTBEGIN
MCAPI void
doJumpInputSystem(class StrictEntityContext const&, struct MovementAbilitiesComponent const&, struct MoveInputComponent const&, class EntityModifier<class FlagComponent<struct MobIsJumpingFlag>>);
// NOLINTEND

}; // namespace JumpInputSystemImpl
