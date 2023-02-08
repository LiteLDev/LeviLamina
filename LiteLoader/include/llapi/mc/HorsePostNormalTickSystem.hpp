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
     * @hash   -1149762114
     * @symbol  ?createSystem\@HorsePostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @hash   1534222925
     * @symbol  ?_doHorsePostNormalTickSystem\@HorsePostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doHorsePostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};