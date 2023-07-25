#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/FlagComponent.h"

class SendPlayerAuthInputReceivedEventSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SENDPLAYERAUTHINPUTRECEIVEDEVENTSYSTEM
public:
    SendPlayerAuthInputReceivedEventSystem& operator=(SendPlayerAuthInputReceivedEventSystem const&) = delete;
    SendPlayerAuthInputReceivedEventSystem(SendPlayerAuthInputReceivedEventSystem const&)            = delete;
    SendPlayerAuthInputReceivedEventSystem()                                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?_doSendPlayerAuthInputReceivedEvent\@SendPlayerAuthInputReceivedEventSystem\@\@SAXAEAVStrictEntityContext\@\@AEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void
    _doSendPlayerAuthInputReceivedEvent(class StrictEntityContext&, class FlagComponent<struct PlayerComponentFlag> const&, class ActorOwnerComponent&);
    /**
     * @symbol ?create\@SendPlayerAuthInputReceivedEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
};
