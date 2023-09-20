/**
 * @file  ServerNetworkEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerNetworkEventListener.
 *
 */
class ServerNetworkEventListener {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERNETWORKEVENTLISTENER
public:
    class ServerNetworkEventListener& operator=(class ServerNetworkEventListener const &) = delete;
    ServerNetworkEventListener(class ServerNetworkEventListener const &) = delete;
    ServerNetworkEventListener() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?onEvent\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUServerNetworkGameplayNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const &);
    /**
     * @vftbl 2
     * @symbol ?onMessage\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUMessageEvent\@\@\@Z
     */
    virtual enum class EventResult onMessage(struct MessageEvent const &);

};
