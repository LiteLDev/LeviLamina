#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorDroppedItemEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDROPPEDITEMEVENT
public:
    ActorDroppedItemEvent& operator=(ActorDroppedItemEvent const&) = delete;
    ActorDroppedItemEvent(ActorDroppedItemEvent const&)            = delete;
    ActorDroppedItemEvent()                                        = delete;
#endif

public:
    /**
     * @symbol ??1ActorDroppedItemEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorDroppedItemEvent();
};
