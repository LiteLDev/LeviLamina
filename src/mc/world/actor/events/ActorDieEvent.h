#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDieEvent {
public:
    // prevent constructor by default
    ActorDieEvent& operator=(ActorDieEvent const&);
    ActorDieEvent(ActorDieEvent const&);
    ActorDieEvent();
};
