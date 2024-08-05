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
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
