#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorCarriedItemChangedEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORCARRIEDITEMCHANGEDEVENT
public:
    ActorCarriedItemChangedEvent& operator=(ActorCarriedItemChangedEvent const&) = delete;
    ActorCarriedItemChangedEvent()                                               = delete;
#endif

public:
    /**
     * @symbol ??0ActorCarriedItemChangedEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorCarriedItemChangedEvent(struct ActorCarriedItemChangedEvent const&);
    /**
     * @symbol ??1ActorCarriedItemChangedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorCarriedItemChangedEvent();
};
