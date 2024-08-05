#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class FinalizeMoveSystem {
public:
    // prevent constructor by default
    FinalizeMoveSystem& operator=(FinalizeMoveSystem const&);
    FinalizeMoveSystem(FinalizeMoveSystem const&);
    FinalizeMoveSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tick(class ViewT<class StrictEntityContext, struct AABBShapeComponent const, struct MoveRequestComponent const, struct OffsetsComponent const, struct StateVectorComponent, class Optional<struct OnGroundFlagComponent const>, class Optional<struct MovementAbilitiesComponent const>>, class EntityModifier<struct OnGroundFlagComponent, class FlagComponent<struct CollisionFlag>, class FlagComponent<struct HorizontalCollisionFlag>, class FlagComponent<struct VerticalCollisionFlag>, class FlagComponent<struct CollidableMobNearFlag>>);

    // NOLINTEND
};
