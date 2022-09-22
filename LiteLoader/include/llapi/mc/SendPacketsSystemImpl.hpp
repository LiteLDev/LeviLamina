/**
 * @file  SendPacketsSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SendPacketsSystemImpl.
 *
 */
class SendPacketsSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDPACKETSSYSTEMIMPL
public:
    class SendPacketsSystemImpl& operator=(class SendPacketsSystemImpl const &) = delete;
    SendPacketsSystemImpl(class SendPacketsSystemImpl const &) = delete;
    SendPacketsSystemImpl() = delete;
#endif

public:
    /**
     * @hash   -2334099
     * @symbol ?_sendPacketsSystem@SendPacketsSystemImpl@@SAXV?$ViewedEntityContextT@VStrictEntityContext@@$$CBVActorOwnerComponent@@$$CBUSendPacketsComponent@@@@@Z
     */
    MCAPI static void _sendPacketsSystem(class ViewedEntityContextT<class StrictEntityContext, class ActorOwnerComponent const, struct SendPacketsComponent const>);

};