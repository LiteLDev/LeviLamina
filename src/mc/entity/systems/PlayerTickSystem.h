#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERTICKSYSTEM
public:
    PlayerTickSystem& operator=(PlayerTickSystem const&) = delete;
    PlayerTickSystem(PlayerTickSystem const&)            = delete;
    PlayerTickSystem()                                   = delete;
#endif

public:
    /**
     * @symbol ?create\@PlayerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?onTickAdded\@PlayerTickSystem\@\@SAXAEAUPlayerTickComponent\@\@_K\@Z
     */
    MCAPI static void onTickAdded(struct PlayerTickComponent&, unsigned __int64);
    /**
     * @symbol ?shouldTickMovementSystemOnEntity\@PlayerTickSystem\@\@SA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI static bool shouldTickMovementSystemOnEntity(class EntityContext const&);
};
