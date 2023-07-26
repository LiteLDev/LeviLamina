#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDroppedItemEvent {

public:
    // prevent constructor by default
    ActorDroppedItemEvent& operator=(ActorDroppedItemEvent const&) = delete;
    ActorDroppedItemEvent(ActorDroppedItemEvent const&)            = delete;
    ActorDroppedItemEvent()                                        = delete;

public:
    /**
     * @symbol ??1ActorDroppedItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDroppedItemEvent(); // NOLINT
};
