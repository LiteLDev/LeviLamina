#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerUseNameTagEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUSENAMETAGEVENT
public:
    PlayerUseNameTagEvent& operator=(PlayerUseNameTagEvent const&) = delete;
    PlayerUseNameTagEvent()                                        = delete;
#endif

public:
    /**
     * @symbol ??0PlayerUseNameTagEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerUseNameTagEvent(struct PlayerUseNameTagEvent const&);
    /**
     * @symbol ??1PlayerUseNameTagEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerUseNameTagEvent();
};
