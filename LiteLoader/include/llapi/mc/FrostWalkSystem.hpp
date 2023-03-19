/**
 * @file  FrostWalkSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FrostWalkSystem.
 *
 */
class FrostWalkSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FROSTWALKSYSTEM
public:
    class FrostWalkSystem& operator=(class FrostWalkSystem const &) = delete;
    FrostWalkSystem(class FrostWalkSystem const &) = delete;
    FrostWalkSystem() = delete;
#endif

public:
    /**
     * @symbol ?_tryFrostWalk\@FrostWalkSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _tryFrostWalk(class StrictEntityContext &, class ActorOwnerComponent &);
    /**
     * @symbol ?createSystem\@FrostWalkSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
