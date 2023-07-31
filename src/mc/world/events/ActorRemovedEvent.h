#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemovedEvent {

public:
    // prevent constructor by default
    ActorRemovedEvent& operator=(ActorRemovedEvent const&) = delete;
    ActorRemovedEvent(ActorRemovedEvent const&)            = delete;
    ActorRemovedEvent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ActorRemovedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorRemovedEvent();
    // NOLINTEND
};
