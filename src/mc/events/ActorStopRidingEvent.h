#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorStopRidingEvent {

public:
    // prevent constructor by default
    ActorStopRidingEvent& operator=(ActorStopRidingEvent const&) = delete;
    ActorStopRidingEvent()                                       = delete;

public:
    /**
     * @symbol ??0ActorStopRidingEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorStopRidingEvent(struct ActorStopRidingEvent const&); // NOLINT
    /**
     * @symbol ??1ActorStopRidingEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorStopRidingEvent(); // NOLINT
};
