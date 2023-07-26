#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddEvent {

public:
    // prevent constructor by default
    PlayerAddEvent& operator=(PlayerAddEvent const&) = delete;
    PlayerAddEvent(PlayerAddEvent const&)            = delete;
    PlayerAddEvent()                                 = delete;

public:
    /**
     * @symbol ??1PlayerAddEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerAddEvent(); // NOLINT
};
