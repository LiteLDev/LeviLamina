#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorAddEffectEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORADDEFFECTEVENT
public:
    ActorAddEffectEvent& operator=(ActorAddEffectEvent const&) = delete;
    ActorAddEffectEvent()                                      = delete;
#endif

public:
    /**
     * @symbol ??0ActorAddEffectEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorAddEffectEvent(struct ActorAddEffectEvent const&);
    /**
     * @symbol ??1ActorAddEffectEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorAddEffectEvent();
};
