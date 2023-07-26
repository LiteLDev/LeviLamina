#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDiedEvent {

public:
    // prevent constructor by default
    ActorDiedEvent& operator=(ActorDiedEvent const&) = delete;
    ActorDiedEvent(ActorDiedEvent const&)            = delete;
    ActorDiedEvent()                                 = delete;

public:
    /**
     * @symbol ??1ActorDiedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDiedEvent(); // NOLINT
};
