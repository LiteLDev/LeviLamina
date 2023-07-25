#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHealthChangedEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHEALTHCHANGEDEVENT
public:
    ActorHealthChangedEvent& operator=(ActorHealthChangedEvent const&) = delete;
    ActorHealthChangedEvent(ActorHealthChangedEvent const&)            = delete;
    ActorHealthChangedEvent()                                          = delete;
#endif

public:
    /**
     * @symbol ??1ActorHealthChangedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorHealthChangedEvent();
};
