#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerNetworkEventListener {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKEVENTLISTENER
public:
    ServerNetworkEventListener& operator=(ServerNetworkEventListener const&) = delete;
    ServerNetworkEventListener(ServerNetworkEventListener const&)            = delete;
    ServerNetworkEventListener()                                             = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERNETWORKEVENTLISTENER
    /**
     * @symbol
     * ?onEvent\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUServerNetworkGameplayNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const&);
    /**
     * @symbol ?onMessage\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUMessageEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onMessage(struct MessageEvent const&);
#endif
};
