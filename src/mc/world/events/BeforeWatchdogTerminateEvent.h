#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BeforeWatchdogTerminateEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8b3de9;
    ::ll::UntypedStorage<4, 4>  mUnk549ddf;
    // NOLINTEND

public:
    // prevent constructor by default
    BeforeWatchdogTerminateEvent& operator=(BeforeWatchdogTerminateEvent const&);
    BeforeWatchdogTerminateEvent(BeforeWatchdogTerminateEvent const&);
    BeforeWatchdogTerminateEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BeforeWatchdogTerminateEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
