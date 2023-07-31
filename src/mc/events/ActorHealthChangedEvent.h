#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHealthChangedEvent {

public:
    // prevent constructor by default
    ActorHealthChangedEvent& operator=(ActorHealthChangedEvent const&) = delete;
    ActorHealthChangedEvent(ActorHealthChangedEvent const&)            = delete;
    ActorHealthChangedEvent()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ActorHealthChangedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorHealthChangedEvent();
    // NOLINTEND
};
