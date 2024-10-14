#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeforeWatchdogTerminateEvent {
public:
    // prevent constructor by default
    BeforeWatchdogTerminateEvent& operator=(BeforeWatchdogTerminateEvent const&);
    BeforeWatchdogTerminateEvent(BeforeWatchdogTerminateEvent const&);
    BeforeWatchdogTerminateEvent();

public:
    // NOLINTBEGIN
    MCAPI ~BeforeWatchdogTerminateEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
