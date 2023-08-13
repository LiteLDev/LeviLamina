#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerNetworkEventListener {

public:
    // prevent constructor by default
    ServerNetworkEventListener& operator=(ServerNetworkEventListener const&) = delete;
    ServerNetworkEventListener(ServerNetworkEventListener const&)            = delete;
    ServerNetworkEventListener()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?onEvent\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUServerNetworkGameplayNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const&);
    /**
     * @vftbl 2
     * @symbol ?onMessage\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUMessageEvent\@\@\@Z
     */
    virtual enum class EventResult onMessage(struct MessageEvent const&);
    // NOLINTEND
};
