#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/FlagComponent.h"

class SendPlayerAuthInputReceivedEventSystem {

public:
    // prevent constructor by default
    SendPlayerAuthInputReceivedEventSystem& operator=(SendPlayerAuthInputReceivedEventSystem const&) = delete;
    SendPlayerAuthInputReceivedEventSystem(SendPlayerAuthInputReceivedEventSystem const&)            = delete;
    SendPlayerAuthInputReceivedEventSystem()                                                         = delete;

public:
    /**
     * @symbol
     * ?_doSendPlayerAuthInputReceivedEvent\@SendPlayerAuthInputReceivedEventSystem\@\@SAXAEAVStrictEntityContext\@\@AEBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void
    _doSendPlayerAuthInputReceivedEvent(class StrictEntityContext&, class FlagComponent<struct PlayerComponentFlag> const&, class ActorOwnerComponent&); // NOLINT
    /**
     * @symbol ?create\@SendPlayerAuthInputReceivedEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
};
