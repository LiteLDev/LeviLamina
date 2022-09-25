/**
 * @file  TropicalFishPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class TropicalFishPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TROPICALFISHPOSTNORMALTICKSYSTEM
public:
    class TropicalFishPostNormalTickSystem& operator=(class TropicalFishPostNormalTickSystem const &) = delete;
    TropicalFishPostNormalTickSystem(class TropicalFishPostNormalTickSystem const &) = delete;
    TropicalFishPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem@TropicalFishPostNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doTropicalFishPostNormalTickSystem@TropicalFishPostNormalTickSystem@@CAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
     */
    MCAPI static void _doTropicalFishPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};