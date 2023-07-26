#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerNetworkEventListener {

public:
    // prevent constructor by default
    ServerNetworkEventListener& operator=(ServerNetworkEventListener const&) = delete;
    ServerNetworkEventListener(ServerNetworkEventListener const&)            = delete;
    ServerNetworkEventListener()                                             = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERNETWORKEVENTLISTENER
    /**
     * @symbol
     * ?onEvent\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUServerNetworkGameplayNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const&); // NOLINT
    /**
     * @symbol ?onMessage\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUMessageEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onMessage(struct MessageEvent const&); // NOLINT
#endif
};
