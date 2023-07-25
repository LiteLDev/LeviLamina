#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class FinalizeMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINALIZEMOVESYSTEM
public:
    FinalizeMoveSystem& operator=(FinalizeMoveSystem const&) = delete;
    FinalizeMoveSystem(FinalizeMoveSystem const&)            = delete;
    FinalizeMoveSystem()                                     = delete;
#endif

public:
    /**
     * @symbol ?create\@FinalizeMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?tick\@FinalizeMoveSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAABBShapeComponent\@\@$$CBUMoveRequestComponent\@\@$$CBUOffsetsComponent\@\@UStateVectorComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$Optional\@$$CBUAbilitiesComponent\@\@\@\@V?$Optional\@USlideOffsetComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UOnGroundFlag\@\@\@\@V?$FlagComponent\@UCollisionFlag\@\@\@\@V?$FlagComponent\@UHorizontalCollisionFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AABBShapeComponent const, struct MoveRequestComponent const, struct OffsetsComponent const, struct StateVectorComponent, class Optional<class FlagComponent<struct OnGroundFlag> const>, class Optional<struct AbilitiesComponent const>, class Optional<struct SlideOffsetComponent>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct OnGroundFlag>, class FlagComponent<struct CollisionFlag>, class FlagComponent<struct HorizontalCollisionFlag>, class FlagComponent<struct VerticalCollisionFlag>>);
};
