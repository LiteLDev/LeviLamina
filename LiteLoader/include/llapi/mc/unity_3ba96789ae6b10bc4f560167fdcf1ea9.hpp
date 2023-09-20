/**
 * @file  unity_3ba96789ae6b10bc4f560167fdcf1ea9.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace unity_3ba96789ae6b10bc4f560167fdcf1ea9 {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_tryTickPlayerMovement\@unity_3ba96789ae6b10bc4f560167fdcf1ea9\@\@YA?AV?$optional\@_K\@std\@\@AEAUPlayerTickComponent\@\@AEBUIPlayerTickPolicy\@\@\@Z
     */
    MCAPI class std::optional<unsigned __int64> _tryTickPlayerMovement(struct PlayerTickComponent &, struct IPlayerTickPolicy const &);
    /**
     * @symbol ?_updatePlayerMovementTick\@unity_3ba96789ae6b10bc4f560167fdcf1ea9\@\@YAXAEAVStrictEntityContext\@\@AEAUPlayerTickComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPlayerCurrentTickComponent\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void _updatePlayerMovementTick(class StrictEntityContext &, struct PlayerTickComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PlayerCurrentTickComponent, class FlagComponent<struct ActorMovementTickNeededFlag>> &);

};