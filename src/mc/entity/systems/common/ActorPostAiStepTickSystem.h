#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPostAiStepTickSystem {
public:
    // prevent constructor by default
    ActorPostAiStepTickSystem& operator=(ActorPostAiStepTickSystem const&);
    ActorPostAiStepTickSystem(ActorPostAiStepTickSystem const&);
    ActorPostAiStepTickSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
