#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerInputSystem {
public:
    // prevent constructor by default
    ServerPlayerInputSystem& operator=(ServerPlayerInputSystem const&);
    ServerPlayerInputSystem(ServerPlayerInputSystem const&);
    ServerPlayerInputSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@ServerPlayerInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?onPlayerAuthInputPacket@ServerPlayerInputSystem@@SAXAEAUServerPlayerMovementComponent@@AEBVPlayerAuthInputPacket@@@Z
    MCAPI static void
    onPlayerAuthInputPacket(struct ServerPlayerMovementComponent&, class PlayerAuthInputPacket const&);

    // NOLINTEND
};
