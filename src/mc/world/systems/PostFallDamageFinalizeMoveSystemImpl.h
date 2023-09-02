#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace PostFallDamageFinalizeMoveSystemImpl {
// NOLINTBEGIN
// symbol:
// ?doPostFallDamageFinalizeMoveSystem@PostFallDamageFinalizeMoveSystemImpl@@YAXAEAVStrictEntityContext@@AEBUMoveRequestComponent@@AEAUStateVectorComponent@@V?$Optional@USlideOffsetComponent@@@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UCollidableMobNearFlag@@@@@@@Z
MCAPI void
doPostFallDamageFinalizeMoveSystem(class StrictEntityContext&, struct MoveRequestComponent const&, struct StateVectorComponent&, class Optional<struct SlideOffsetComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct CollidableMobNearFlag>>&);
// NOLINTEND

}; // namespace PostFallDamageFinalizeMoveSystemImpl
