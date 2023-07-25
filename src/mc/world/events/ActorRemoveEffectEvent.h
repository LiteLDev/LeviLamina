#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorRemoveEffectEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORREMOVEEFFECTEVENT
public:
    ActorRemoveEffectEvent& operator=(ActorRemoveEffectEvent const&) = delete;
    ActorRemoveEffectEvent()                                         = delete;
#endif

public:
    /**
     * @symbol ??0ActorRemoveEffectEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorRemoveEffectEvent(struct ActorRemoveEffectEvent const&);
    /**
     * @symbol ??1ActorRemoveEffectEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorRemoveEffectEvent();
};
