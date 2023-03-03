/**
 * @file  HorsePostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class HorsePostNormalTickSystem.
 *
 */
class HorsePostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEPOSTNORMALTICKSYSTEM
public:
    class HorsePostNormalTickSystem& operator=(class HorsePostNormalTickSystem const &) = delete;
    HorsePostNormalTickSystem(class HorsePostNormalTickSystem const &) = delete;
    HorsePostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@HorsePostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doHorsePostNormalTickSystem\@HorsePostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doHorsePostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};