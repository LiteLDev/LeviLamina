#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeforeWatchdogTerminateEvent {

public:
    // prevent constructor by default
    BeforeWatchdogTerminateEvent& operator=(BeforeWatchdogTerminateEvent const&) = delete;
    BeforeWatchdogTerminateEvent(BeforeWatchdogTerminateEvent const&)            = delete;
    BeforeWatchdogTerminateEvent()                                               = delete;

public:
    /**
     * @symbol ??1BeforeWatchdogTerminateEvent\@\@QEAA\@XZ
     */
    MCAPI ~BeforeWatchdogTerminateEvent(); // NOLINT
};
