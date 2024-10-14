#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerInstanceLeaveGameDoneEvent {
public:
    // prevent constructor by default
    ServerInstanceLeaveGameDoneEvent& operator=(ServerInstanceLeaveGameDoneEvent const&);
    ServerInstanceLeaveGameDoneEvent(ServerInstanceLeaveGameDoneEvent const&);
    ServerInstanceLeaveGameDoneEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ServerInstanceLeaveGameDoneEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
