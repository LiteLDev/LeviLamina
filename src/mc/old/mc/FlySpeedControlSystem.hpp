/**
 * @file  FlySpeedControlSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class FlySpeedControlSystem.
 *
 */
class FlySpeedControlSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYSPEEDCONTROLSYSTEM
public:
    class FlySpeedControlSystem& operator=(class FlySpeedControlSystem const &) = delete;
    FlySpeedControlSystem(class FlySpeedControlSystem const &) = delete;
    FlySpeedControlSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createFlySpeedControlSystem\@FlySpeedControlSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createFlySpeedControlSystem();

};