#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeforeWatchdogTerminateEvent {

public:
    // prevent constructor by default
    BeforeWatchdogTerminateEvent& operator=(BeforeWatchdogTerminateEvent const&) = delete;
    BeforeWatchdogTerminateEvent(BeforeWatchdogTerminateEvent const&)            = delete;
    BeforeWatchdogTerminateEvent()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1BeforeWatchdogTerminateEvent\@\@QEAA\@XZ
     */
    MCAPI ~BeforeWatchdogTerminateEvent();
    // NOLINTEND
};
