#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddLevelEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERADDLEVELEVENT
public:
    PlayerAddLevelEvent& operator=(PlayerAddLevelEvent const&) = delete;
    PlayerAddLevelEvent(PlayerAddLevelEvent const&)            = delete;
    PlayerAddLevelEvent()                                      = delete;
#endif

public:
    /**
     * @symbol ??1PlayerAddLevelEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerAddLevelEvent();
};
