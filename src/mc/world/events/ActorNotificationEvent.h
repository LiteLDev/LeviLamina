#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorNotificationEvent {
public:
    // prevent constructor by default
    ActorNotificationEvent& operator=(ActorNotificationEvent const&);
    ActorNotificationEvent(ActorNotificationEvent const&);
    ActorNotificationEvent();

public:
    // NOLINTBEGIN
    // symbol: ??1ActorNotificationEvent@@QEAA@XZ
    MCAPI ~ActorNotificationEvent();

    // NOLINTEND
};
