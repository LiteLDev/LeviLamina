#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMoveInputHandlerSystem {

public:
    // prevent constructor by default
    ServerMoveInputHandlerSystem& operator=(ServerMoveInputHandlerSystem const&) = delete;
    ServerMoveInputHandlerSystem(ServerMoveInputHandlerSystem const&)            = delete;
    ServerMoveInputHandlerSystem()                                               = delete;

public:
    /**
     * @symbol ?create\@ServerMoveInputHandlerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
    /**
     * @symbol
     * ?digestPlayerInputPacket\@ServerMoveInputHandlerSystem\@\@SAXAEAUMoveInputComponent\@\@AEBVPlayerAuthInputPacket\@\@\@Z
     */
    MCAPI static void digestPlayerInputPacket(struct MoveInputComponent&, class PlayerAuthInputPacket const&); // NOLINT
};
