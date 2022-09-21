/**
 * @file  MC/BeePostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class BeePostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEEPOSTNORMALTICKSYSTEM
public:
    class BeePostNormalTickSystem& operator=(class BeePostNormalTickSystem const &) = delete;
    BeePostNormalTickSystem(class BeePostNormalTickSystem const &) = delete;
    BeePostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@BeePostNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doBeePostNormalTickSystem@BeePostNormalTickSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
     */
    MCAPI static void _doBeePostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};