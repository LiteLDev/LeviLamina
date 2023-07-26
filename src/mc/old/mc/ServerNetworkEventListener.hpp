/**
 * @file  ServerNetworkEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERNETWORKEVENTLISTENER
    /**
     * @symbol  ?onEvent\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUServerNetworkGameplayNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ServerNetworkGameplayNotificationEvent const &);
    /**
     * @symbol  ?onMessage\@ServerNetworkEventListener\@\@UEAA?AW4EventResult\@\@AEBUMessageEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onMessage(struct MessageEvent const &);
#endif

};