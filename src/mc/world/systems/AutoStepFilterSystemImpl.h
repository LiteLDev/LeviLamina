#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace AutoStepFilterSystemImpl {
// NOLINTBEGIN
/**
 * @symbol
 * ?doAutoStepFilterSystem\@AutoStepFilterSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@AEBUMaxAutoStepComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBUAbilitiesComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UAutoStepRequestFlag\@\@\@\@\@\@\@Z
 */
MCAPI void doAutoStepFilterSystem(class StrictEntityContext&, struct MoveRequestComponent const&, struct MaxAutoStepComponent const&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct AbilitiesComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AutoStepRequestFlag>>);
// NOLINTEND

}; // namespace AutoStepFilterSystemImpl
