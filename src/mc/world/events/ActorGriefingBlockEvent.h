#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorGriefingBlockEvent {

public:
    // prevent constructor by default
    ActorGriefingBlockEvent& operator=(ActorGriefingBlockEvent const&) = delete;
    ActorGriefingBlockEvent()                                          = delete;

public:
    /**
     * @symbol ??0ActorGriefingBlockEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorGriefingBlockEvent(struct ActorGriefingBlockEvent const&); // NOLINT
    /**
     * @symbol ??1ActorGriefingBlockEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorGriefingBlockEvent(); // NOLINT
};
