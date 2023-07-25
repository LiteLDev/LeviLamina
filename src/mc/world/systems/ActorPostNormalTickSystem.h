#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPostNormalTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPOSTNORMALTICKSYSTEM
public:
    ActorPostNormalTickSystem& operator=(ActorPostNormalTickSystem const&) = delete;
    ActorPostNormalTickSystem(ActorPostNormalTickSystem const&)            = delete;
    ActorPostNormalTickSystem()                                            = delete;
#endif

public:
    /**
     * @symbol ?createSystemClient\@ActorPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystemClient();
    /**
     * @symbol ?createSystemServer\@ActorPostNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystemServer();
};
