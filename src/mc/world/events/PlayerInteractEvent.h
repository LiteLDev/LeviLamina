#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERINTERACTEVENT
public:
    PlayerInteractEvent& operator=(PlayerInteractEvent const&) = delete;
    PlayerInteractEvent()                                      = delete;
#endif

public:
    /**
     * @symbol ??0PlayerInteractEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerInteractEvent(struct PlayerInteractEvent const&);
    /**
     * @symbol ??1PlayerInteractEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerInteractEvent();
};
