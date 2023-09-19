#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerBroadcastMoveSystem {
public:
    // prevent constructor by default
    ServerPlayerBroadcastMoveSystem& operator=(ServerPlayerBroadcastMoveSystem const&);
    ServerPlayerBroadcastMoveSystem(ServerPlayerBroadcastMoveSystem const&);
    ServerPlayerBroadcastMoveSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@ServerPlayerBroadcastMoveSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
