#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerNetworkGameplayNotificationEvent {
public:
    // prevent constructor by default
    ServerNetworkGameplayNotificationEvent& operator=(ServerNetworkGameplayNotificationEvent const&);
    ServerNetworkGameplayNotificationEvent(ServerNetworkGameplayNotificationEvent const&);
    ServerNetworkGameplayNotificationEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ServerNetworkGameplayNotificationEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
