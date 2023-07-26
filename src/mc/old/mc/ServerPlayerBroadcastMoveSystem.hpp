/**
 * @file  ServerPlayerBroadcastMoveSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerPlayerBroadcastMoveSystem.
 *
 */
class ServerPlayerBroadcastMoveSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERBROADCASTMOVESYSTEM
public:
    class ServerPlayerBroadcastMoveSystem& operator=(class ServerPlayerBroadcastMoveSystem const &) = delete;
    ServerPlayerBroadcastMoveSystem(class ServerPlayerBroadcastMoveSystem const &) = delete;
    ServerPlayerBroadcastMoveSystem() = delete;
#endif

public:
    /**
     * @symbol  ?create\@ServerPlayerBroadcastMoveSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};