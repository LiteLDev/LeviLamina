/**
 * @file  InsideBubbleColumnSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsideBubbleColumnSystem.
 *
 */
class InsideBubbleColumnSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBUBBLECOLUMNSYSTEM
public:
    class InsideBubbleColumnSystem& operator=(class InsideBubbleColumnSystem const &) = delete;
    InsideBubbleColumnSystem(class InsideBubbleColumnSystem const &) = delete;
    InsideBubbleColumnSystem() = delete;
#endif

public:
    /**
     * @hash   106139860
     * @symbol ?createBoatInsideBubbleColumnSystem@InsideBubbleColumnSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBoatInsideBubbleColumnSystem();
    /**
     * @hash   1071436234
     * @symbol ?createBubbleColumnMovementSystem@InsideBubbleColumnSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBubbleColumnMovementSystem();
    /**
     * @hash   -944831336
     * @symbol ?createSpawnBubbleColumnParticlesSystem@InsideBubbleColumnSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSpawnBubbleColumnParticlesSystem();

};