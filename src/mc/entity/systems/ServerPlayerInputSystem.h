#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerInputSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERINPUTSYSTEM
public:
    ServerPlayerInputSystem& operator=(ServerPlayerInputSystem const&) = delete;
    ServerPlayerInputSystem(ServerPlayerInputSystem const&)            = delete;
    ServerPlayerInputSystem()                                          = delete;
#endif

public:
    /**
     * @symbol ?create\@ServerPlayerInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?onPlayerAuthInputPacket\@ServerPlayerInputSystem\@\@SAXAEAUServerPlayerMovementComponent\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCAPI static void
    onPlayerAuthInputPacket(struct ServerPlayerMovementComponent&, class PlayerAuthInputPacket const&);
};
