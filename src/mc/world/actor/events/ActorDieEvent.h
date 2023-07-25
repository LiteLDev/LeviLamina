#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDieEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDIEEVENT
public:
    ActorDieEvent& operator=(ActorDieEvent const&) = delete;
    ActorDieEvent(ActorDieEvent const&)            = delete;
    ActorDieEvent()                                = delete;
#endif

public:
};
