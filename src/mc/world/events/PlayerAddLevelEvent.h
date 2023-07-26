#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddLevelEvent {

public:
    // prevent constructor by default
    PlayerAddLevelEvent& operator=(PlayerAddLevelEvent const&) = delete;
    PlayerAddLevelEvent(PlayerAddLevelEvent const&)            = delete;
    PlayerAddLevelEvent()                                      = delete;

public:
    /**
     * @symbol ??1PlayerAddLevelEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerAddLevelEvent(); // NOLINT
};
