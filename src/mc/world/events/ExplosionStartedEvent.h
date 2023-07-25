#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExplosionStartedEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOSIONSTARTEDEVENT
public:
    ExplosionStartedEvent& operator=(ExplosionStartedEvent const&) = delete;
    ExplosionStartedEvent()                                        = delete;
#endif

public:
    /**
     * @symbol ??0ExplosionStartedEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ExplosionStartedEvent(struct ExplosionStartedEvent const&);
    /**
     * @symbol ??1ExplosionStartedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ExplosionStartedEvent();
};
