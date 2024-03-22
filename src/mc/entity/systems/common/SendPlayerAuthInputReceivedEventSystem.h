#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SendPlayerAuthInputReceivedEventSystem {
public:
    // prevent constructor by default
    SendPlayerAuthInputReceivedEventSystem& operator=(SendPlayerAuthInputReceivedEventSystem const&);
    SendPlayerAuthInputReceivedEventSystem(SendPlayerAuthInputReceivedEventSystem const&);
    SendPlayerAuthInputReceivedEventSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_doSendPlayerAuthInputReceivedEvent@SendPlayerAuthInputReceivedEventSystem@@SAXAEAVStrictEntityContext@@AEBV?$FlagComponent@UPlayerComponentFlag@@@@AEAVActorOwnerComponent@@@Z
    MCAPI static void
    _doSendPlayerAuthInputReceivedEvent(class StrictEntityContext&, class FlagComponent<struct PlayerComponentFlag> const&, class ActorOwnerComponent&);

    // symbol: ?create@SendPlayerAuthInputReceivedEventSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?tickSystem@SendPlayerAuthInputReceivedEventSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UActorMovementTickNeededFlag@@@@UServerPlayerCurrentMovementComponent@@@@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@VActorOwnerComponent@@@@@Z
    MCAPI static void tickSystem(class ViewT<
                                 class StrictEntityContext,
                                 struct Include<
                                     class FlagComponent<struct ActorMovementTickNeededFlag>,
                                     struct ServerPlayerCurrentMovementComponent>,
                                 class FlagComponent<struct PlayerComponentFlag> const,
                                 class ActorOwnerComponent>);

    // NOLINTEND
};
