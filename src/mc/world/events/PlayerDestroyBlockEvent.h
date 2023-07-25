#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDestroyBlockEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERDESTROYBLOCKEVENT
public:
    PlayerDestroyBlockEvent& operator=(PlayerDestroyBlockEvent const&) = delete;
    PlayerDestroyBlockEvent(PlayerDestroyBlockEvent const&)            = delete;
    PlayerDestroyBlockEvent()                                          = delete;
#endif

public:
    /**
     * @symbol ??1PlayerDestroyBlockEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDestroyBlockEvent();
};
