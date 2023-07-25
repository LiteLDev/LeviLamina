#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorInsideBlockEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORINSIDEBLOCKEVENT
public:
    ActorInsideBlockEvent& operator=(ActorInsideBlockEvent const&) = delete;
    ActorInsideBlockEvent()                                        = delete;
#endif

public:
    /**
     * @symbol ??0ActorInsideBlockEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorInsideBlockEvent(struct ActorInsideBlockEvent const&);
    /**
     * @symbol ??1ActorInsideBlockEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorInsideBlockEvent();
};
