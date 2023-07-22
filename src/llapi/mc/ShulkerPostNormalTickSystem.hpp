/**
 * @file  ShulkerPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ShulkerPostNormalTickSystem.
 *
 */
class ShulkerPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERPOSTNORMALTICKSYSTEM
public:
    class ShulkerPostNormalTickSystem& operator=(class ShulkerPostNormalTickSystem const &) = delete;
    ShulkerPostNormalTickSystem(class ShulkerPostNormalTickSystem const &) = delete;
    ShulkerPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ShulkerPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doShulkerPostNormalTickSystem\@ShulkerPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doShulkerPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};