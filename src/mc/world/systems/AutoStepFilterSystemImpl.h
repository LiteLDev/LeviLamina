#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace AutoStepFilterSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doAutoStepFilterSystem@AutoStepFilterSystemImpl@@YAXAEAVStrictEntityContext@@AEBUMoveRequestComponent@@AEBUMaxAutoStepComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBUAbilitiesComponent@@@@V?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UAutoStepRequestFlag@@@@@@@Z
MCAPI void doAutoStepFilterSystem(class StrictEntityContext&, struct MoveRequestComponent const&, struct MaxAutoStepComponent const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct AbilitiesComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AutoStepRequestFlag>>);
// NOLINTEND

}; // namespace AutoStepFilterSystemImpl
