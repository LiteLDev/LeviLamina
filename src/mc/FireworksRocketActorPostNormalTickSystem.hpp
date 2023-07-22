/**
 * @file  FireworksRocketActorPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FireworksRocketActorPostNormalTickSystem.
 *
 */
class FireworksRocketActorPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSROCKETACTORPOSTNORMALTICKSYSTEM
public:
    class FireworksRocketActorPostNormalTickSystem& operator=(class FireworksRocketActorPostNormalTickSystem const &) = delete;
    FireworksRocketActorPostNormalTickSystem(class FireworksRocketActorPostNormalTickSystem const &) = delete;
    FireworksRocketActorPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@FireworksRocketActorPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doFireworksRocketActorPostNormalTickSystem\@FireworksRocketActorPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doFireworksRocketActorPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};