/**
 * @file  PlayerSetWalkOrSprintFlySpeedSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerSetWalkOrSprintFlySpeedSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSETWALKORSPRINTFLYSPEEDSYSTEM
public:
    class PlayerSetWalkOrSprintFlySpeedSystem& operator=(class PlayerSetWalkOrSprintFlySpeedSystem const &) = delete;
    PlayerSetWalkOrSprintFlySpeedSystem(class PlayerSetWalkOrSprintFlySpeedSystem const &) = delete;
    PlayerSetWalkOrSprintFlySpeedSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PlayerSetWalkOrSprintFlySpeedSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
