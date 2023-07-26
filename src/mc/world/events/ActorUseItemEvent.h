#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUseItemEvent {

public:
    // prevent constructor by default
    ActorUseItemEvent& operator=(ActorUseItemEvent const&) = delete;
    ActorUseItemEvent(ActorUseItemEvent const&)            = delete;
    ActorUseItemEvent()                                    = delete;

public:
    /**
     * @symbol ??1ActorUseItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorUseItemEvent(); // NOLINT
};
