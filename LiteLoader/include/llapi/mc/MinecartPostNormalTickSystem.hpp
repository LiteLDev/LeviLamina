/**
 * @file  MinecartPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartPostNormalTickSystem.
 *
 */
class MinecartPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTPOSTNORMALTICKSYSTEM
public:
    class MinecartPostNormalTickSystem& operator=(class MinecartPostNormalTickSystem const &) = delete;
    MinecartPostNormalTickSystem(class MinecartPostNormalTickSystem const &) = delete;
    MinecartPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@MinecartPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doMinecartPostNormalTickSystem\@MinecartPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUMinecartPreNormalTickBlockPosComponent\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doMinecartPostNormalTickSystem(class StrictEntityContext const &, struct MinecartPreNormalTickBlockPosComponent const &, class ActorOwnerComponent &);

private:

};