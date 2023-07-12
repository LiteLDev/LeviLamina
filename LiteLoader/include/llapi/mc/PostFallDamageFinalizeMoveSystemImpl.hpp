/**
 * @file  PostFallDamageFinalizeMoveSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace PostFallDamageFinalizeMoveSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doPostFallDamageFinalizeMoveSystem\@PostFallDamageFinalizeMoveSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@USlideOffsetComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UCollidableMobNearFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void doPostFallDamageFinalizeMoveSystem(class StrictEntityContext &, struct MoveRequestComponent const &, struct StateVectorComponent &, class Optional<struct SlideOffsetComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct CollidableMobNearFlag>> &);

};