#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDieEvent {

public:
    // prevent constructor by default
    ActorDieEvent& operator=(ActorDieEvent const&) = delete;
    ActorDieEvent(ActorDieEvent const&)            = delete;
    ActorDieEvent()                                = delete;
};
