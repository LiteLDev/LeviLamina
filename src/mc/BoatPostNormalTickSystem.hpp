/**
 * @file  BoatPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BoatPostNormalTickSystem.
 *
 */
class BoatPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOATPOSTNORMALTICKSYSTEM
public:
    class BoatPostNormalTickSystem& operator=(class BoatPostNormalTickSystem const &) = delete;
    BoatPostNormalTickSystem(class BoatPostNormalTickSystem const &) = delete;
    BoatPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@BoatPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doBoatPostNormalTickSystem\@BoatPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doBoatPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};