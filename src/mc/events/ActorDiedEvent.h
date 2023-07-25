#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDiedEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDIEDEVENT
public:
    ActorDiedEvent& operator=(ActorDiedEvent const&) = delete;
    ActorDiedEvent(ActorDiedEvent const&)            = delete;
    ActorDiedEvent()                                 = delete;
#endif

public:
    /**
     * @symbol ??1ActorDiedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDiedEvent();
};
