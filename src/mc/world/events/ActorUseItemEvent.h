#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUseItemEvent {

public:
    // prevent constructor by default
    ActorUseItemEvent& operator=(ActorUseItemEvent const&) = delete;
    ActorUseItemEvent(ActorUseItemEvent const&)            = delete;
    ActorUseItemEvent()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ActorUseItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorUseItemEvent();
    // NOLINTEND
};
