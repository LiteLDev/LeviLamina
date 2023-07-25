#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerSendPlayerOnGroundSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERSENDPLAYERONGROUNDSYSTEM
public:
    ServerPlayerSendPlayerOnGroundSystem& operator=(ServerPlayerSendPlayerOnGroundSystem const&) = delete;
    ServerPlayerSendPlayerOnGroundSystem(ServerPlayerSendPlayerOnGroundSystem const&)            = delete;
    ServerPlayerSendPlayerOnGroundSystem()                                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?_sendPlayerOnGround\@ServerPlayerSendPlayerOnGroundSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@\@Z
     */
    MCAPI static void _sendPlayerOnGround(class StrictEntityContext&, class ActorOwnerComponent&);
    /**
     * @symbol ?createSystem\@ServerPlayerSendPlayerOnGroundSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
