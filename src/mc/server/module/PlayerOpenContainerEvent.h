#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerOpenContainerEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYEROPENCONTAINEREVENT
public:
    PlayerOpenContainerEvent& operator=(PlayerOpenContainerEvent const&) = delete;
    PlayerOpenContainerEvent(PlayerOpenContainerEvent const&)            = delete;
    PlayerOpenContainerEvent()                                           = delete;
#endif

public:
    /**
     * @symbol ??1PlayerOpenContainerEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerOpenContainerEvent();
};
