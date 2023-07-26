#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerInstanceNotificationEvent {

public:
    // prevent constructor by default
    ServerInstanceNotificationEvent& operator=(ServerInstanceNotificationEvent const&) = delete;
    ServerInstanceNotificationEvent(ServerInstanceNotificationEvent const&)            = delete;
    ServerInstanceNotificationEvent()                                                  = delete;

public:
    /**
     * @symbol ??1ServerInstanceNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ServerInstanceNotificationEvent(); // NOLINT
};
