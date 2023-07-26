/**
 * @file  FishPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FishPostNormalTickSystem.
 *
 */
class FishPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FISHPOSTNORMALTICKSYSTEM
public:
    class FishPostNormalTickSystem& operator=(class FishPostNormalTickSystem const &) = delete;
    FishPostNormalTickSystem(class FishPostNormalTickSystem const &) = delete;
    FishPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@FishPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doFishPostNormalTickSystem\@FishPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doFishPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};