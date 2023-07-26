#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAttackEvent {

public:
    // prevent constructor by default
    ActorAttackEvent& operator=(ActorAttackEvent const&) = delete;
    ActorAttackEvent(ActorAttackEvent const&)            = delete;
    ActorAttackEvent()                                   = delete;

public:
    /**
     * @symbol ??1ActorAttackEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAttackEvent(); // NOLINT
};
