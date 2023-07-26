#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAddEffectEvent {

public:
    // prevent constructor by default
    ActorAddEffectEvent& operator=(ActorAddEffectEvent const&) = delete;
    ActorAddEffectEvent()                                      = delete;

public:
    /**
     * @symbol ??0ActorAddEffectEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorAddEffectEvent(struct ActorAddEffectEvent const&); // NOLINT
    /**
     * @symbol ??1ActorAddEffectEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAddEffectEvent(); // NOLINT
};
