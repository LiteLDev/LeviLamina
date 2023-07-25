#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPostAiStepTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORPOSTAISTEPTICKSYSTEM
public:
    ActorPostAiStepTickSystem& operator=(ActorPostAiStepTickSystem const&) = delete;
    ActorPostAiStepTickSystem(ActorPostAiStepTickSystem const&)            = delete;
    ActorPostAiStepTickSystem()                                            = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@ActorPostAiStepTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
