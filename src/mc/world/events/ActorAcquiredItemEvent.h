#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAcquiredItemEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORACQUIREDITEMEVENT
public:
    ActorAcquiredItemEvent& operator=(ActorAcquiredItemEvent const&) = delete;
    ActorAcquiredItemEvent()                                         = delete;
#endif

public:
    /**
     * @symbol ??0ActorAcquiredItemEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorAcquiredItemEvent(struct ActorAcquiredItemEvent const&);
    /**
     * @symbol ??1ActorAcquiredItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAcquiredItemEvent();
};
