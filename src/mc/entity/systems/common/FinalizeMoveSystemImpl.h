#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

namespace FinalizeMoveSystemImpl {
// NOLINTBEGIN
// symbol:
// ?tickFinalizeMoveSystem@FinalizeMoveSystemImpl@@YAXAEAVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUMoveRequestComponent@@AEBUOffsetsComponent@@AEAUStateVectorComponent@@V?$Optional@$$CBUOnGroundFlagComponent@@@@V?$Optional@$$CBUMovementAbilitiesComponent@@@@AEAV?$EntityModifier@UOnGroundFlagComponent@@V?$FlagComponent@UCollisionFlag@@@@V?$FlagComponent@UHorizontalCollisionFlag@@@@V?$FlagComponent@UVerticalCollisionFlag@@@@V?$FlagComponent@UCollidableMobNearFlag@@@@@@@Z
MCAPI void
tickFinalizeMoveSystem(class StrictEntityContext&, struct AABBShapeComponent const&, struct MoveRequestComponent const&, struct OffsetsComponent const&, struct StateVectorComponent&, class Optional<struct OnGroundFlagComponent const>, class Optional<struct MovementAbilitiesComponent const>, class EntityModifier<struct OnGroundFlagComponent, class FlagComponent<struct CollisionFlag>, class FlagComponent<struct HorizontalCollisionFlag>, class FlagComponent<struct VerticalCollisionFlag>, class FlagComponent<struct CollidableMobNearFlag>>&);
// NOLINTEND

}; // namespace FinalizeMoveSystemImpl
