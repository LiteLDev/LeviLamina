#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAcquiredItemEvent {

public:
    // prevent constructor by default
    ActorAcquiredItemEvent& operator=(ActorAcquiredItemEvent const&) = delete;
    ActorAcquiredItemEvent()                                         = delete;

public:
    /**
     * @symbol ??0ActorAcquiredItemEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorAcquiredItemEvent(struct ActorAcquiredItemEvent const&); // NOLINT
    /**
     * @symbol ??1ActorAcquiredItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAcquiredItemEvent(); // NOLINT
};
