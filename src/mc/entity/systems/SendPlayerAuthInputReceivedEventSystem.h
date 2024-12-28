#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct PlayerComponent;
struct TickingSystemWithInfo;
// clang-format on

class SendPlayerAuthInputReceivedEventSystem {
public:
    // prevent constructor by default
    SendPlayerAuthInputReceivedEventSystem& operator=(SendPlayerAuthInputReceivedEventSystem const&);
    SendPlayerAuthInputReceivedEventSystem(SendPlayerAuthInputReceivedEventSystem const&);
    SendPlayerAuthInputReceivedEventSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doSendPlayerAuthInputReceivedEvent(
        ::StrictEntityContext&,
        ::PlayerComponent const& playerComponent,
        ::ActorOwnerComponent&   actorOwnerComponent
    );

    MCAPI static ::TickingSystemWithInfo create();
    // NOLINTEND
};
