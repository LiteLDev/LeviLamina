#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerInstanceLeaveGameDoneEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk328481;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInstanceLeaveGameDoneEvent& operator=(ServerInstanceLeaveGameDoneEvent const&);
    ServerInstanceLeaveGameDoneEvent(ServerInstanceLeaveGameDoneEvent const&);
    ServerInstanceLeaveGameDoneEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ServerInstanceLeaveGameDoneEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
