#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerAddExpEvent {

public:
    // prevent constructor by default
    PlayerAddExpEvent& operator=(PlayerAddExpEvent const&) = delete;
    PlayerAddExpEvent(PlayerAddExpEvent const&)            = delete;
    PlayerAddExpEvent()                                    = delete;

public:
    /**
     * @symbol ??1PlayerAddExpEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerAddExpEvent(); // NOLINT
};
