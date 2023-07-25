#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUseItemEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUSEITEMEVENT
public:
    ActorUseItemEvent& operator=(ActorUseItemEvent const&) = delete;
    ActorUseItemEvent(ActorUseItemEvent const&)            = delete;
    ActorUseItemEvent()                                    = delete;
#endif

public:
    /**
     * @symbol ??1ActorUseItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorUseItemEvent();
};
