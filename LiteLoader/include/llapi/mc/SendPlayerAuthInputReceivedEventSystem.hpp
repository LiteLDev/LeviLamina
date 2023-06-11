/**
 * @file  SendPlayerAuthInputReceivedEventSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class SendPlayerAuthInputReceivedEventSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDPLAYERAUTHINPUTRECEIVEDEVENTSYSTEM
public:
    class SendPlayerAuthInputReceivedEventSystem& operator=(class SendPlayerAuthInputReceivedEventSystem const &) = delete;
    SendPlayerAuthInputReceivedEventSystem(class SendPlayerAuthInputReceivedEventSystem const &) = delete;
    SendPlayerAuthInputReceivedEventSystem() = delete;
#endif

public:
    /**
     * @symbol ?_doSendPlayerAuthInputReceivedEvent\@SendPlayerAuthInputReceivedEventSystem\@\@SAXAEAVStrictEntityContext\@\@AEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _doSendPlayerAuthInputReceivedEvent(class StrictEntityContext &, class FlagComponent<struct PlayerComponentFlag> const &, class ActorOwnerComponent &);
    /**
     * @symbol ?create\@SendPlayerAuthInputReceivedEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};
