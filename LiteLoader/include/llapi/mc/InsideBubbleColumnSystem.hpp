/**
 * @file  InsideBubbleColumnSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?createBoatInsideBubbleColumnSystem\@InsideBubbleColumnSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBoatInsideBubbleColumnSystem();
    /**
     * @symbol  ?createBubbleColumnMovementSystem\@InsideBubbleColumnSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBubbleColumnMovementSystem();
    /**
     * @symbol  ?createSpawnBubbleColumnParticlesSystem\@InsideBubbleColumnSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSpawnBubbleColumnParticlesSystem();

};