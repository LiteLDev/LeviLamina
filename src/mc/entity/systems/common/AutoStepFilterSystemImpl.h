#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace AutoStepFilterSystemImpl {
// NOLINTBEGIN
MCAPI void
doAutoStepFilterSystem(class StrictEntityContext const&, struct MoveRequestComponent const&, struct MaxAutoStepComponent const&, class Optional<struct OnGroundFlagComponent const>, class Optional<struct MovementAbilitiesComponent const>, class EntityModifier<class FlagComponent<struct AutoStepRequestFlag>>);
// NOLINTEND

}; // namespace AutoStepFilterSystemImpl
