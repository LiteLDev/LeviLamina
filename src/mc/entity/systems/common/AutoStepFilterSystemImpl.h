#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace AutoStepFilterSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doAutoStepFilterSystem@AutoStepFilterSystemImpl@@YAXAEBVStrictEntityContext@@AEBUMoveRequestComponent@@AEBUMaxAutoStepComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBUMovementAbilitiesComponent@@@@V?$EntityModifier@V?$FlagComponent@UAutoStepRequestFlag@@@@@@@Z
MCAPI void
doAutoStepFilterSystem(class StrictEntityContext const&, struct MoveRequestComponent const&, struct MaxAutoStepComponent const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct MovementAbilitiesComponent const>, class EntityModifier<class FlagComponent<struct AutoStepRequestFlag>>);
// NOLINTEND

}; // namespace AutoStepFilterSystemImpl
