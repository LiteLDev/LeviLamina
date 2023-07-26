#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPostAiStepTickSystem {

public:
    // prevent constructor by default
    ActorPostAiStepTickSystem& operator=(ActorPostAiStepTickSystem const&) = delete;
    ActorPostAiStepTickSystem(ActorPostAiStepTickSystem const&)            = delete;
    ActorPostAiStepTickSystem()                                            = delete;

public:
    /**
     * @symbol ?createSystem\@ActorPostAiStepTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
