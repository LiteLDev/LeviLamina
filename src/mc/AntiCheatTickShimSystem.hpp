/**
 * @file  AntiCheatTickShimSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AntiCheatTickShimSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ANTICHEATTICKSHIMSYSTEM
public:
    class AntiCheatTickShimSystem& operator=(class AntiCheatTickShimSystem const &) = delete;
    AntiCheatTickShimSystem(class AntiCheatTickShimSystem const &) = delete;
    AntiCheatTickShimSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_tickOne\@AntiCheatTickShimSystem\@\@SAXAEBVStrictEntityContext\@\@AEAVActorMovementProxyComponent\@\@\@Z
     */
    MCAPI static void _tickOne(class StrictEntityContext const &, class ActorMovementProxyComponent &);
    /**
     * @symbol  ?create\@AntiCheatTickShimSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};