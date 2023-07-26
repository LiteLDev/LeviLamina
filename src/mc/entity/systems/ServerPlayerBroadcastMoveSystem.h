#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerBroadcastMoveSystem {

public:
    // prevent constructor by default
    ServerPlayerBroadcastMoveSystem& operator=(ServerPlayerBroadcastMoveSystem const&) = delete;
    ServerPlayerBroadcastMoveSystem(ServerPlayerBroadcastMoveSystem const&)            = delete;
    ServerPlayerBroadcastMoveSystem()                                                  = delete;

public:
    /**
     * @symbol ?create\@ServerPlayerBroadcastMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
};
