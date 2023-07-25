#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemovedEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORREMOVEDEVENT
public:
    ActorRemovedEvent& operator=(ActorRemovedEvent const&) = delete;
    ActorRemovedEvent(ActorRemovedEvent const&)            = delete;
    ActorRemovedEvent()                                    = delete;
#endif

public:
    /**
     * @symbol ??1ActorRemovedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorRemovedEvent();
};
