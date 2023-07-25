#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERADDEVENT
public:
    PlayerAddEvent& operator=(PlayerAddEvent const&) = delete;
    PlayerAddEvent(PlayerAddEvent const&)            = delete;
    PlayerAddEvent()                                 = delete;
#endif

public:
    /**
     * @symbol ??1PlayerAddEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerAddEvent();
};
