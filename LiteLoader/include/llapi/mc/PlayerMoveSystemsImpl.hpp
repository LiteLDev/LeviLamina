/**
 * @file  PlayerMoveSystemsImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace PlayerMoveSystemsImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_doLocalPlayerPreMoveJumpSystem\@PlayerMoveSystemsImpl\@\@YAXAEBVStrictEntityContext\@\@AEAUMoveInputComponent\@\@V?$Optional\@V?$FlagComponent\@UAutoJumpingFlag\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UAutoJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void _doLocalPlayerPreMoveJumpSystem(class StrictEntityContext const &, struct MoveInputComponent &, class Optional<class FlagComponent<struct AutoJumpingFlag>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct AutoJumpingFlag>> &);
    /**
     * @symbol ?_doPlayerPreMoveSystem\@PlayerMoveSystemsImpl\@\@YAXAEBVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@AEBUStateVectorComponent\@\@AEAUPlayerLastPosComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasOnGroundFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void _doPlayerPreMoveSystem(class StrictEntityContext const &, struct MoveRequestComponent const &, struct StateVectorComponent const &, struct PlayerLastPosComponent &, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasOnGroundFlag>> &);

};