#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeforeWatchdogTerminateEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEFOREWATCHDOGTERMINATEEVENT
public:
    BeforeWatchdogTerminateEvent& operator=(BeforeWatchdogTerminateEvent const&) = delete;
    BeforeWatchdogTerminateEvent(BeforeWatchdogTerminateEvent const&)            = delete;
    BeforeWatchdogTerminateEvent()                                               = delete;
#endif

public:
    /**
     * @symbol ??1BeforeWatchdogTerminateEvent\@\@QEAA\@XZ
     */
    MCAPI ~BeforeWatchdogTerminateEvent();
};
