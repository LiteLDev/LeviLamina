/**
 * @file  PlayerMovementStatsEventSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerMovementStatsEventSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTSTATSEVENTSYSTEM
public:
    class PlayerMovementStatsEventSystem& operator=(class PlayerMovementStatsEventSystem const &) = delete;
    PlayerMovementStatsEventSystem(class PlayerMovementStatsEventSystem const &) = delete;
    PlayerMovementStatsEventSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@PlayerMovementStatsEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};