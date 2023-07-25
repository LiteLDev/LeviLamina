#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAttackEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORATTACKEVENT
public:
    ActorAttackEvent& operator=(ActorAttackEvent const&) = delete;
    ActorAttackEvent(ActorAttackEvent const&)            = delete;
    ActorAttackEvent()                                   = delete;
#endif

public:
    /**
     * @symbol ??1ActorAttackEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAttackEvent();
};
