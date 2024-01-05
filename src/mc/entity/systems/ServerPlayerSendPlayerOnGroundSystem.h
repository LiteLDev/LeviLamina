#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerSendPlayerOnGroundSystem {
public:
    // prevent constructor by default
    ServerPlayerSendPlayerOnGroundSystem& operator=(ServerPlayerSendPlayerOnGroundSystem const&);
    ServerPlayerSendPlayerOnGroundSystem(ServerPlayerSendPlayerOnGroundSystem const&);
    ServerPlayerSendPlayerOnGroundSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_sendPlayerOnGround@ServerPlayerSendPlayerOnGroundSystem@@SAXAEAVStrictEntityContext@@AEAVActorOwnerComponent@@@Z
    MCAPI static void _sendPlayerOnGround(class StrictEntityContext&, class ActorOwnerComponent& actorComponent);

    // symbol: ?createSystem@ServerPlayerSendPlayerOnGroundSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
