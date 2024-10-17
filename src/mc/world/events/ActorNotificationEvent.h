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
    MCAPI ~ActorNotificationEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
