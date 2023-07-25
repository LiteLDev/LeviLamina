#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorDataSyncSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDATASYNCSYSTEM
public:
    ActorDataSyncSystem& operator=(ActorDataSyncSystem const&) = delete;
    ActorDataSyncSystem(ActorDataSyncSystem const&)            = delete;
    ActorDataSyncSystem()                                      = delete;
#endif

public:
    /**
     * @symbol ?createActorDataSyncSystem\@ActorDataSyncSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorDataSyncSystem();
};
