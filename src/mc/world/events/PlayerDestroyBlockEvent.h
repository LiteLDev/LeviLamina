#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerDestroyBlockEvent {

public:
    // prevent constructor by default
    PlayerDestroyBlockEvent& operator=(PlayerDestroyBlockEvent const&) = delete;
    PlayerDestroyBlockEvent(PlayerDestroyBlockEvent const&)            = delete;
    PlayerDestroyBlockEvent()                                          = delete;

public:
    /**
     * @symbol ??1PlayerDestroyBlockEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerDestroyBlockEvent(); // NOLINT
};
