#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerRespawnEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESPAWNEVENT
public:
    PlayerRespawnEvent& operator=(PlayerRespawnEvent const&) = delete;
    PlayerRespawnEvent(PlayerRespawnEvent const&)            = delete;
    PlayerRespawnEvent()                                     = delete;
#endif

public:
    /**
     * @symbol ??1PlayerRespawnEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerRespawnEvent();
};
