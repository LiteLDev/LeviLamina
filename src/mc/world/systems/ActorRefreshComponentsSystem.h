#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRefreshComponentsSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORREFRESHCOMPONENTSSYSTEM
public:
    ActorRefreshComponentsSystem& operator=(ActorRefreshComponentsSystem const&) = delete;
    ActorRefreshComponentsSystem(ActorRefreshComponentsSystem const&)            = delete;
    ActorRefreshComponentsSystem()                                               = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ActorRefreshComponentsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
