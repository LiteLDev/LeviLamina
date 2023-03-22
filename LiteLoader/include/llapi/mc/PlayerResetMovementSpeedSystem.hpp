/**
 * @file  PlayerResetMovementSpeedSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class PlayerResetMovementSpeedSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESETMOVEMENTSPEEDSYSTEM
public:
    class PlayerResetMovementSpeedSystem& operator=(class PlayerResetMovementSpeedSystem const &) = delete;
    PlayerResetMovementSpeedSystem(class PlayerResetMovementSpeedSystem const &) = delete;
    PlayerResetMovementSpeedSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PlayerResetMovementSpeedSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

};
