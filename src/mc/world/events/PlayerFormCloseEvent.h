#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerFormCloseEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERFORMCLOSEEVENT
public:
    PlayerFormCloseEvent& operator=(PlayerFormCloseEvent const&) = delete;
    PlayerFormCloseEvent(PlayerFormCloseEvent const&)            = delete;
    PlayerFormCloseEvent()                                       = delete;
#endif

public:
    /**
     * @symbol ??1PlayerFormCloseEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerFormCloseEvent();
};
