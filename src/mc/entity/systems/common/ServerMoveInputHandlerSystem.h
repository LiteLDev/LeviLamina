#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMoveInputHandlerSystem {
public:
    // prevent constructor by default
    ServerMoveInputHandlerSystem& operator=(ServerMoveInputHandlerSystem const&);
    ServerMoveInputHandlerSystem(ServerMoveInputHandlerSystem const&);
    ServerMoveInputHandlerSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@ServerMoveInputHandlerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?digestPlayerInputPacket@ServerMoveInputHandlerSystem@@SAXAEAUMoveInputComponent@@AEBVPlayerAuthInputPacket@@@Z
    MCAPI static void
    digestPlayerInputPacket(struct MoveInputComponent& input, class PlayerAuthInputPacket const& packet);

    // NOLINTEND
};
