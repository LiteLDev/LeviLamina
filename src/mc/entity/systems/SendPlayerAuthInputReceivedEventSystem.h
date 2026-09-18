#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct PlayerComponent;
// clang-format on

class SendPlayerAuthInputReceivedEventSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _doSendPlayerAuthInputReceivedEvent(
        ::StrictEntityContext&,
        ::PlayerComponent const& playerComponent,
        ::ActorOwnerComponent&   actorOwnerComponent
    );
    // NOLINTEND
};
