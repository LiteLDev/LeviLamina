#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMoveInputHandlerSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMOVEINPUTHANDLERSYSTEM
public:
    ServerMoveInputHandlerSystem& operator=(ServerMoveInputHandlerSystem const&) = delete;
    ServerMoveInputHandlerSystem(ServerMoveInputHandlerSystem const&)            = delete;
    ServerMoveInputHandlerSystem()                                               = delete;
#endif

public:
    /**
     * @symbol ?create\@ServerMoveInputHandlerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?digestPlayerInputPacket\@ServerMoveInputHandlerSystem\@\@SAXAEAUMoveInputComponent\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCAPI static void digestPlayerInputPacket(struct MoveInputComponent&, class PlayerAuthInputPacket const&);
};
