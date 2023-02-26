/**
 * @file  CacheMovingStateSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace CacheMovingStateSystem.
 *
 */
namespace CacheMovingStateSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?tickEntity\@CacheMovingStateSystem\@\@YAXAEAVStrictEntityContext\@\@AEAUSynchedActorDataComponent\@\@AEAUActorRotationComponent\@\@V?$Optional\@V?$FlagComponent\@UMovingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void tickEntity(class StrictEntityContext &, struct SynchedActorDataComponent &, struct ActorRotationComponent &, class Optional<class FlagComponent<struct MovingFlag>>);
    /**
     * @symbol  ?tickPassengerEntity\@CacheMovingStateSystem\@\@YAXAEAVStrictEntityContext\@\@AEBUPassengerComponent\@\@AEAUSynchedActorDataComponent\@\@AEAUActorRotationComponent\@\@V?$Optional\@V?$FlagComponent\@UMovingFlag\@\@\@\@\@\@AEBV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@V?$FlagComponent\@UControlledByLocalInstanceFlag\@\@\@\@\@\@\@Z
     */
    MCAPI void tickPassengerEntity(class StrictEntityContext &, struct PassengerComponent const &, struct SynchedActorDataComponent &, struct ActorRotationComponent &, class Optional<class FlagComponent<struct MovingFlag>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct ControlledByLocalInstanceFlag>> const &);

};