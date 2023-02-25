/**
 * @file  PlayerRotationSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerRotationSystem.
 *
 */
class PlayerRotationSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERROTATIONSYSTEM
public:
    class PlayerRotationSystem& operator=(class PlayerRotationSystem const &) = delete;
    PlayerRotationSystem(class PlayerRotationSystem const &) = delete;
    PlayerRotationSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createPlayerRotationSystem\@PlayerRotationSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerRotationSystem();

};