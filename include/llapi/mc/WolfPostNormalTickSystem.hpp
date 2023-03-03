/**
 * @file  WolfPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WolfPostNormalTickSystem.
 *
 */
class WolfPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOLFPOSTNORMALTICKSYSTEM
public:
    class WolfPostNormalTickSystem& operator=(class WolfPostNormalTickSystem const &) = delete;
    WolfPostNormalTickSystem(class WolfPostNormalTickSystem const &) = delete;
    WolfPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@WolfPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doWolfPostNormalTickSystem\@WolfPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doWolfPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};