#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorKilledEvent {

public:
    // prevent constructor by default
    ActorKilledEvent& operator=(ActorKilledEvent const&) = delete;
    ActorKilledEvent(ActorKilledEvent const&)            = delete;
    ActorKilledEvent()                                   = delete;

public:
    /**
     * @symbol ??1ActorKilledEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorKilledEvent(); // NOLINT
};
