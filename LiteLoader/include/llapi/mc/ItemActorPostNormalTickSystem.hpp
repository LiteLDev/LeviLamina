/**
 * @file  ItemActorPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemActorPostNormalTickSystem.
 *
 */
class ItemActorPostNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMACTORPOSTNORMALTICKSYSTEM
public:
    class ItemActorPostNormalTickSystem& operator=(class ItemActorPostNormalTickSystem const &) = delete;
    ItemActorPostNormalTickSystem(class ItemActorPostNormalTickSystem const &) = delete;
    ItemActorPostNormalTickSystem() = delete;
#endif

public:
    /**
     * @hash   -204376316
     * @symbol  ?createSystem\@ItemActorPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @hash   539675821
     * @symbol  ?_doItemActorPostNormalTickSystem\@ItemActorPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doItemActorPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};