#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorGriefingBlockEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORGRIEFINGBLOCKEVENT
public:
    ActorGriefingBlockEvent& operator=(ActorGriefingBlockEvent const&) = delete;
    ActorGriefingBlockEvent()                                          = delete;
#endif

public:
    /**
     * @symbol ??0ActorGriefingBlockEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorGriefingBlockEvent(struct ActorGriefingBlockEvent const&);
    /**
     * @symbol ??1ActorGriefingBlockEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorGriefingBlockEvent();
};
