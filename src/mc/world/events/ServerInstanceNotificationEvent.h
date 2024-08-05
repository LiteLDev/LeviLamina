#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerInstanceNotificationEvent {
public:
    // prevent constructor by default
    ServerInstanceNotificationEvent& operator=(ServerInstanceNotificationEvent const&);
    ServerInstanceNotificationEvent(ServerInstanceNotificationEvent const&);
    ServerInstanceNotificationEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ServerInstanceNotificationEvent();

    // NOLINTEND
};
