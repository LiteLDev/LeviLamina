#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class PostFallDamageFinalizeMoveSystem {

public:
    // prevent constructor by default
    PostFallDamageFinalizeMoveSystem& operator=(PostFallDamageFinalizeMoveSystem const&) = delete;
    PostFallDamageFinalizeMoveSystem(PostFallDamageFinalizeMoveSystem const&)            = delete;
    PostFallDamageFinalizeMoveSystem()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?createPostFallDamageFinalizeMoveSystem\@PostFallDamageFinalizeMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPostFallDamageFinalizeMoveSystem();
    /**
     * @symbol
     * ?tickPostFallDamageFinalizeMoveSystem\@PostFallDamageFinalizeMoveSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUMoveRequestComponent\@\@UStateVectorComponent\@\@V?$Optional\@USlideOffsetComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        tickPostFallDamageFinalizeMoveSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct MoveRequestComponent const, struct StateVectorComponent, class Optional<struct SlideOffsetComponent>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct CollidableMobNearFlag>>);
    // NOLINTEND
};
