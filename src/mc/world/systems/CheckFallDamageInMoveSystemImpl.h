#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

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
