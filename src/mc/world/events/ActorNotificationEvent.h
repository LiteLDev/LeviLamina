#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorNotificationEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORNOTIFICATIONEVENT
public:
    ActorNotificationEvent& operator=(ActorNotificationEvent const&) = delete;
    ActorNotificationEvent(ActorNotificationEvent const&)            = delete;
    ActorNotificationEvent()                                         = delete;
#endif

public:
    /**
     * @symbol ??1ActorNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ActorNotificationEvent();
};
