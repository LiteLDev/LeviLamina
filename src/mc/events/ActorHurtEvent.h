#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorHurtEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORHURTEVENT
public:
    ActorHurtEvent& operator=(ActorHurtEvent const&) = delete;
    ActorHurtEvent(ActorHurtEvent const&)            = delete;
    ActorHurtEvent()                                 = delete;
#endif

public:
    /**
     * @symbol ??1ActorHurtEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorHurtEvent();
};
