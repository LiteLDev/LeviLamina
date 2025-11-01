#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MobIsJumpingFlagComponent;
struct MoveInputComponent;
struct MovementAbilitiesComponent;
// clang-format on

namespace JumpInputSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doJumpInputSystem(::StrictEntityContext const& context, ::MovementAbilitiesComponent const& abilitiesComponent, ::MoveInputComponent const& moveInputComponent, ::EntityModifier<::MobIsJumpingFlagComponent> mod);
// NOLINTEND

}
