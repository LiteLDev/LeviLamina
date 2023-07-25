#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerInstanceLeaveGameDoneEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERINSTANCELEAVEGAMEDONEEVENT
public:
    ServerInstanceLeaveGameDoneEvent& operator=(ServerInstanceLeaveGameDoneEvent const&) = delete;
    ServerInstanceLeaveGameDoneEvent(ServerInstanceLeaveGameDoneEvent const&)            = delete;
    ServerInstanceLeaveGameDoneEvent()                                                   = delete;
#endif

public:
    /**
     * @symbol ??1ServerInstanceLeaveGameDoneEvent\@\@QEAA\@XZ
     */
    MCAPI ~ServerInstanceLeaveGameDoneEvent();
};
