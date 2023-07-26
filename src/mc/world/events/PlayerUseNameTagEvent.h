#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerUseNameTagEvent {

public:
    // prevent constructor by default
    PlayerUseNameTagEvent& operator=(PlayerUseNameTagEvent const&) = delete;
    PlayerUseNameTagEvent()                                        = delete;

public:
    /**
     * @symbol ??0PlayerUseNameTagEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerUseNameTagEvent(struct PlayerUseNameTagEvent const&); // NOLINT
    /**
     * @symbol ??1PlayerUseNameTagEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerUseNameTagEvent(); // NOLINT
};
