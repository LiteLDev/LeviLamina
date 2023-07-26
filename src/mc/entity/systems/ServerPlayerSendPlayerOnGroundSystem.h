#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerSendPlayerOnGroundSystem {

public:
    // prevent constructor by default
    ServerPlayerSendPlayerOnGroundSystem& operator=(ServerPlayerSendPlayerOnGroundSystem const&) = delete;
    ServerPlayerSendPlayerOnGroundSystem(ServerPlayerSendPlayerOnGroundSystem const&)            = delete;
    ServerPlayerSendPlayerOnGroundSystem()                                                       = delete;

public:
    /**
     * @symbol
     * ?_sendPlayerOnGround\@ServerPlayerSendPlayerOnGroundSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _sendPlayerOnGround(class StrictEntityContext&, class ActorOwnerComponent&); // NOLINT
    /**
     * @symbol ?createSystem\@ServerPlayerSendPlayerOnGroundSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
