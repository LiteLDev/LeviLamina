#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace CheckFallDamageInMoveSystemImpl {
// NOLINTBEGIN
/**
 * @symbol
 * ?checkFallDamageInMove\@CheckFallDamageInMoveSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UCheckFallDamageRequestComponent\@\@\@\@\@Z
 */
MCAPI void
checkFallDamageInMove(class StrictEntityContext&, struct MoveRequestComponent const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct CheckFallDamageRequestComponent>&);
// NOLINTEND

}; // namespace CheckFallDamageInMoveSystemImpl
