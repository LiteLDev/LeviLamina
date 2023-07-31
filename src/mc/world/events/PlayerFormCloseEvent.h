#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerFormCloseEvent {

public:
    // prevent constructor by default
    PlayerFormCloseEvent& operator=(PlayerFormCloseEvent const&) = delete;
    PlayerFormCloseEvent(PlayerFormCloseEvent const&)            = delete;
    PlayerFormCloseEvent()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1PlayerFormCloseEvent\@\@QEAA\@XZ
     */
    MCAPI ~PlayerFormCloseEvent();
    // NOLINTEND
};
