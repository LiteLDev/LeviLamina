#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractEvent {

public:
    // prevent constructor by default
    PlayerInteractEvent& operator=(PlayerInteractEvent const&) = delete;
    PlayerInteractEvent()                                      = delete;

public:
    /**
     * @symbol ??0PlayerInteractEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI PlayerInteractEvent(struct PlayerInteractEvent const&); // NOLINT
    /**
     * @symbol ??1PlayerInteractEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerInteractEvent(); // NOLINT
};
