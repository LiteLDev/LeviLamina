#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AutoStepRequestFlagComponent;
struct CanAlwaysAutoStepFlagComponent;
struct MaxAutoStepComponent;
struct MoveRequestComponent;
struct MovementAbilitiesComponent;
struct OnGroundFlagComponent;
// clang-format on

namespace AutoStepFilterSystemImpl {
// functions
// NOLINTBEGIN
MCAPI void doAutoStepFilterSystem(
    ::StrictEntityContext const&                                                       context,
    ::MoveRequestComponent const&                                                      moveRequestComponent,
    ::MaxAutoStepComponent const&                                                      maxAutoStepComponent,
    ::Optional<::OnGroundFlagComponent const>                                          onGroundFlagComponent,
    ::Optional<::MovementAbilitiesComponent const>                                     movementAbilitiesComponent,
    ::Optional<::CanAlwaysAutoStepFlagComponent const>                                 canAlwaysAutoStepFlagComponent,
    ::EntityModifier<::AutoStepRequestFlagComponent, ::CanAlwaysAutoStepFlagComponent> mod
);
// NOLINTEND

} // namespace AutoStepFilterSystemImpl
