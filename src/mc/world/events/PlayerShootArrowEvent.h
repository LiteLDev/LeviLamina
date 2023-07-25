#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerShootArrowEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSHOOTARROWEVENT
public:
    PlayerShootArrowEvent& operator=(PlayerShootArrowEvent const&) = delete;
    PlayerShootArrowEvent()                                        = delete;
#endif

public:
    /**
     * @symbol ??0PlayerShootArrowEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerShootArrowEvent(struct PlayerShootArrowEvent const&);
    /**
     * @symbol ??1PlayerShootArrowEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerShootArrowEvent();
};
