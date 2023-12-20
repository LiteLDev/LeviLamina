#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace CheckFallDamageInMoveSystemImpl {
// NOLINTBEGIN
// symbol:
// ?checkFallDamageInMove@CheckFallDamageInMoveSystemImpl@@YAXAEAVStrictEntityContext@@AEBUMoveRequestComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@AEAV?$EntityModifier@UCheckFallDamageRequestComponent@@@@@Z
MCAPI void
checkFallDamageInMove(class StrictEntityContext&, struct MoveRequestComponent const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifier<struct CheckFallDamageRequestComponent>&);
// NOLINTEND

}; // namespace CheckFallDamageInMoveSystemImpl
