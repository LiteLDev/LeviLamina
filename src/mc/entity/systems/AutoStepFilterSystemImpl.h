#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/entity/components/FlagComponent.h"

namespace AutoStepFilterSystemImpl {
// NOLINTBEGIN
MCAPI void doAutoStepFilterSystem(
    class StrictEntityContext const&                                      context,
    struct MoveRequestComponent const&                                    moveRequestComponent,
    struct MaxAutoStepComponent const&                                    maxAutoStepComponent,
    class Optional<struct OnGroundFlagComponent const>                    onGroundFlagComponent,
    class Optional<struct MovementAbilitiesComponent const>               abilitiesComponent,
    class EntityModifier<class FlagComponent<struct AutoStepRequestFlag>> mod
);
// NOLINTEND

}; // namespace AutoStepFilterSystemImpl
