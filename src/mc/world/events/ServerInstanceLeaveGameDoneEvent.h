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
    // symbol: ??1ServerInstanceLeaveGameDoneEvent@@QEAA@XZ
    MCAPI ~ServerInstanceLeaveGameDoneEvent();

    // NOLINTEND
};
