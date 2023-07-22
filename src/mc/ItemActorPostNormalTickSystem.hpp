/**
 * @file  ItemActorPostNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?createSystem\@ItemActorPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doItemActorPostNormalTickSystem\@ItemActorPostNormalTickSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doItemActorPostNormalTickSystem(class StrictEntityContext const &, class ActorOwnerComponent &);

private:

};