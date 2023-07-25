#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerBroadcastMoveSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERBROADCASTMOVESYSTEM
public:
    ServerPlayerBroadcastMoveSystem& operator=(ServerPlayerBroadcastMoveSystem const&) = delete;
    ServerPlayerBroadcastMoveSystem(ServerPlayerBroadcastMoveSystem const&)            = delete;
    ServerPlayerBroadcastMoveSystem()                                                  = delete;
#endif

public:
    /**
     * @symbol ?create\@ServerPlayerBroadcastMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
};
