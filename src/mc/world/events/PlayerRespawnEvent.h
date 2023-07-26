#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerRespawnEvent {

public:
    // prevent constructor by default
    PlayerRespawnEvent& operator=(PlayerRespawnEvent const&) = delete;
    PlayerRespawnEvent(PlayerRespawnEvent const&)            = delete;
    PlayerRespawnEvent()                                     = delete;

public:
    /**
     * @symbol ??1PlayerRespawnEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerRespawnEvent(); // NOLINT
};
