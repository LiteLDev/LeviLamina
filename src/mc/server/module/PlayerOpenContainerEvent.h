#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerOpenContainerEvent {

public:
    // prevent constructor by default
    PlayerOpenContainerEvent& operator=(PlayerOpenContainerEvent const&) = delete;
    PlayerOpenContainerEvent(PlayerOpenContainerEvent const&)            = delete;
    PlayerOpenContainerEvent()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1PlayerOpenContainerEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerOpenContainerEvent();
    // NOLINTEND
};
