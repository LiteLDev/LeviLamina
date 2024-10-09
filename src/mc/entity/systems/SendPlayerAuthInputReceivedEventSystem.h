#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/FlagComponent.h"

class SendPlayerAuthInputReceivedEventSystem {
public:
    // prevent constructor by default
    SendPlayerAuthInputReceivedEventSystem& operator=(SendPlayerAuthInputReceivedEventSystem const&);
    SendPlayerAuthInputReceivedEventSystem(SendPlayerAuthInputReceivedEventSystem const&);
    SendPlayerAuthInputReceivedEventSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _doSendPlayerAuthInputReceivedEvent(
        class StrictEntityContext&,
        class FlagComponent<struct PlayerComponentFlag> const& playerComponent,
        class ActorOwnerComponent&                             actorOwnerComponent
    );

    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
