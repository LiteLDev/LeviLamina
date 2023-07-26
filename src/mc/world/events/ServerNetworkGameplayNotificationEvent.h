#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerNetworkGameplayNotificationEvent {

public:
    // prevent constructor by default
    ServerNetworkGameplayNotificationEvent& operator=(ServerNetworkGameplayNotificationEvent const&) = delete;
    ServerNetworkGameplayNotificationEvent(ServerNetworkGameplayNotificationEvent const&)            = delete;
    ServerNetworkGameplayNotificationEvent()                                                         = delete;

public:
    /**
     * @symbol ??1ServerNetworkGameplayNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ServerNetworkGameplayNotificationEvent(); // NOLINT
};
