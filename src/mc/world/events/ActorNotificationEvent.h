#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorNotificationEvent {

public:
    // prevent constructor by default
    ActorNotificationEvent& operator=(ActorNotificationEvent const&) = delete;
    ActorNotificationEvent(ActorNotificationEvent const&)            = delete;
    ActorNotificationEvent()                                         = delete;

public:
    /**
     * @symbol ??1ActorNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorNotificationEvent(); // NOLINT
};
