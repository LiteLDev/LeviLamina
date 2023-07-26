#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemoveEffectEvent {

public:
    // prevent constructor by default
    ActorRemoveEffectEvent& operator=(ActorRemoveEffectEvent const&) = delete;
    ActorRemoveEffectEvent()                                         = delete;

public:
    /**
     * @symbol ??0ActorRemoveEffectEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorRemoveEffectEvent(struct ActorRemoveEffectEvent const&); // NOLINT
    /**
     * @symbol ??1ActorRemoveEffectEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorRemoveEffectEvent(); // NOLINT
};
