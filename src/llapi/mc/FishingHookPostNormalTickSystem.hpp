/**
 * @file  FishingHookPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FishingHookPostNormalTickSystem.
 *
 */
class FishingHookPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHINGHOOKPOSTNORMALTICKSYSTEM
public:
    class FishingHookPostNormalTickSystem& operator=(class FishingHookPostNormalTickSystem const &) = delete;
    FishingHookPostNormalTickSystem(class FishingHookPostNormalTickSystem const &) = delete;
    FishingHookPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@FishingHookPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doFishingHookPostNormalTickSystem\@FishingHookPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doFishingHookPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};