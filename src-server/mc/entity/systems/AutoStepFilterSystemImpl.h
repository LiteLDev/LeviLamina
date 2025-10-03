#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AutoStepRequestFlagComponent;
struct MaxAutoStepComponent;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct OnGroundFlagComponent;
// clang-format on

namespace AutoStepFilterSystemImpl {
// functions
// NOLINTBEGIN
MCNAPI void doAutoStepFilterSystem(
    ::StrictEntityContext const&                     context,
    ::MoveRequestComponent const&                    moveRequestComponent,
    ::MaxAutoStepComponent const&                    maxAutoStepComponent,
    ::Optional<::OnGroundFlagComponent const>        onGroundFlagComponent,
    ::Optional<::MovementAbilitiesComponent const>   abilitiesComponent,
    ::EntityModifier<::AutoStepRequestFlagComponent> mod
);
// NOLINTEND

} // namespace AutoStepFilterSystemImpl
