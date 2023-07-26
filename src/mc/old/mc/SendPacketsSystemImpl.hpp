/**
 * @file  SendPacketsSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?_sendPacketsSystem\@SendPacketsSystemImpl\@\@SAXAEAVStrictEntityContext\@\@AEBVActorOwnerComponent\@\@AEAUSendPacketsComponent\@\@\@Z
     */
    MCAPI static void _sendPacketsSystem(class StrictEntityContext &, class ActorOwnerComponent const &, struct SendPacketsComponent &);

};