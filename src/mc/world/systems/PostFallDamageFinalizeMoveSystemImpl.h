#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0, typename T1, typename... T2> class EntityModifierT;
template<typename T0> class FlagComponent;
template<typename T0> class Optional;
// clang-format on

namespace PostFallDamageFinalizeMoveSystemImpl {
// NOLINTBEGIN
/**
 * @symbol
 * ?doPostFallDamageFinalizeMoveSystem\@PostFallDamageFinalizeMoveSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@USlideOffsetComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@\@Z
 */
MCAPI void
doPostFallDamageFinalizeMoveSystem(class StrictEntityContext&, struct MoveRequestComponent const&, struct StateVectorComponent&, class Optional<struct SlideOffsetComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct CollidableMobNearFlag>>&);
// NOLINTEND

}; // namespace PostFallDamageFinalizeMoveSystemImpl
