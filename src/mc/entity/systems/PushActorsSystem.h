#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PushActorsSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PUSHACTORSSYSTEM
public:
    PushActorsSystem& operator=(PushActorsSystem const&) = delete;
    PushActorsSystem(PushActorsSystem const&)            = delete;
    PushActorsSystem()                                   = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PushActorsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?pushActors\@PushActorsSystem\@\@SAXAEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void pushActors(class ActorOwnerComponent&);
};
