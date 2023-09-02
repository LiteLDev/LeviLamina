#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

namespace FinalizeMoveSystemImpl {
// NOLINTBEGIN
// symbol:
// ?tickFinalizeMoveSystem@FinalizeMoveSystemImpl@@YAXAEAVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUMoveRequestComponent@@AEBUOffsetsComponent@@AEAUStateVectorComponent@@V?$Optional@$$CBV?$FlagComponent@UOnGroundFlag@@@@@@V?$Optional@$$CBUAbilitiesComponent@@@@V?$Optional@USlideOffsetComponent@@@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@V?$FlagComponent@UOnGroundFlag@@@@V?$FlagComponent@UCollisionFlag@@@@V?$FlagComponent@UHorizontalCollisionFlag@@@@V?$FlagComponent@UVerticalCollisionFlag@@@@@@@Z
MCAPI void tickFinalizeMoveSystem(class StrictEntityContext&, struct AABBShapeComponent const&, struct MoveRequestComponent const&, struct OffsetsComponent const&, struct StateVectorComponent&, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct AbilitiesComponent const>, class Optional<struct SlideOffsetComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct CollisionFlag>, class FlagComponent<struct HorizontalCollisionFlag>, class FlagComponent<struct VerticalCollisionFlag>>&);
// NOLINTEND

}; // namespace FinalizeMoveSystemImpl
