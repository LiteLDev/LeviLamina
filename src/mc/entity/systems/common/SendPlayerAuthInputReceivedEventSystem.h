#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/components/FlagComponent.h"

class SendPlayerAuthInputReceivedEventSystem {
public:
    // prevent constructor by default
    SendPlayerAuthInputReceivedEventSystem& operator=(SendPlayerAuthInputReceivedEventSystem const&);
    SendPlayerAuthInputReceivedEventSystem(SendPlayerAuthInputReceivedEventSystem const&);
    SendPlayerAuthInputReceivedEventSystem();

public:
    // NOLINTBEGIN
    MCAPI static void
    _doSendPlayerAuthInputReceivedEvent(class StrictEntityContext&, class FlagComponent<struct PlayerComponentFlag> const&, class ActorOwnerComponent&);

    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
