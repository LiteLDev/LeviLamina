#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ExplosionStartedEvent {

public:
    // prevent constructor by default
    ExplosionStartedEvent& operator=(ExplosionStartedEvent const&) = delete;
    ExplosionStartedEvent()                                        = delete;

public:
    /**
     * @symbol ??0ExplosionStartedEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ExplosionStartedEvent(struct ExplosionStartedEvent const&); // NOLINT
    /**
     * @symbol ??1ExplosionStartedEvent\@\@QEAA\@XZ
     */
    MCAPI ~ExplosionStartedEvent(); // NOLINT
};
