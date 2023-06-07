/**
 * @file  VanillaOffsetSystemUtil.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace VanillaOffsetSystemUtil {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?_clientTick\@VanillaOffsetSystemUtil\@\@YAXAEAVStrictEntityContext\@\@AEAUVanillaOffsetComponent\@\@AEBUOffsetsComponent\@\@AEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@\@\@M\@Z
     */
    MCAPI void _clientTick(class StrictEntityContext &, struct VanillaOffsetComponent &, struct OffsetsComponent const &, struct SynchedActorDataComponent const &, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, float);
    /**
     * @symbol ?_serverTick\@VanillaOffsetSystemUtil\@\@YAXAEAVStrictEntityContext\@\@AEAUVanillaOffsetComponent\@\@AEBUOffsetsComponent\@\@AEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@\@\@M\@Z
     */
    MCAPI void _serverTick(class StrictEntityContext &, struct VanillaOffsetComponent &, struct OffsetsComponent const &, struct SynchedActorDataComponent const &, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, float);
    /**
     * @symbol ?getCameraOffset\@VanillaOffsetSystemUtil\@\@YAMAEBUSynchedActorDataComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UPlayerIsSleepingFlag\@\@\@\@\@\@M\@Z
     */
    MCAPI float getCameraOffset(struct SynchedActorDataComponent const &, class Optional<class FlagComponent<struct PlayerIsSleepingFlag> const>, float);

};