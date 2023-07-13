/**
 * @file  PostFallDamageFinalizeMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PostFallDamageFinalizeMoveSystem.
 *
 */
class PostFallDamageFinalizeMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_POSTFALLDAMAGEFINALIZEMOVESYSTEM
public:
    class PostFallDamageFinalizeMoveSystem& operator=(class PostFallDamageFinalizeMoveSystem const &) = delete;
    PostFallDamageFinalizeMoveSystem(class PostFallDamageFinalizeMoveSystem const &) = delete;
    PostFallDamageFinalizeMoveSystem() = delete;
#endif

public:
    /**
     * @symbol ?createPostFallDamageFinalizeMoveSystem\@PostFallDamageFinalizeMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPostFallDamageFinalizeMoveSystem();
    /**
     * @symbol ?tickPostFallDamageFinalizeMoveSystem\@PostFallDamageFinalizeMoveSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUMoveRequestComponent\@\@UStateVectorComponent\@\@V?$Optional\@USlideOffsetComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickPostFallDamageFinalizeMoveSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct MoveRequestComponent const, struct StateVectorComponent, class Optional<struct SlideOffsetComponent>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct CollidableMobNearFlag>>);

};
