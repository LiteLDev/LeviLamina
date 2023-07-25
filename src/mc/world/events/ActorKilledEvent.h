#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorKilledEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORKILLEDEVENT
public:
    ActorKilledEvent& operator=(ActorKilledEvent const&) = delete;
    ActorKilledEvent(ActorKilledEvent const&)            = delete;
    ActorKilledEvent()                                   = delete;
#endif

public:
    /**
     * @symbol ??1ActorKilledEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorKilledEvent();
};
