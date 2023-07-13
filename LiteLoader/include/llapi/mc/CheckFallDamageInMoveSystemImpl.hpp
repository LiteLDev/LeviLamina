/**
 * @file  CheckFallDamageInMoveSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace CheckFallDamageInMoveSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?checkFallDamageInMove\@CheckFallDamageInMoveSystemImpl\@\@YAXAEAVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UCheckFallDamageRequestComponent\@\@\@\@\@Z
     */
    MCAPI void checkFallDamageInMove(class StrictEntityContext &, struct MoveRequestComponent const &, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct CheckFallDamageRequestComponent> &);

};