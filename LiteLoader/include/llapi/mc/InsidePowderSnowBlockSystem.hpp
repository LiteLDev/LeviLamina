/**
 * @file  InsidePowderSnowBlockSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class InsidePowderSnowBlockSystem.
 *
 */
class InsidePowderSnowBlockSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEPOWDERSNOWBLOCKSYSTEM
public:
    class InsidePowderSnowBlockSystem& operator=(class InsidePowderSnowBlockSystem const &) = delete;
    InsidePowderSnowBlockSystem(class InsidePowderSnowBlockSystem const &) = delete;
    InsidePowderSnowBlockSystem() = delete;
#endif

public:
    /**
     * @hash   -724328682
     * @symbol ?createMovementSlowdownSystem@InsidePowderSnowBlockSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMovementSlowdownSystem();
    /**
     * @hash   1598660452
     * @symbol ?createServerSideClearFireSystem@InsidePowderSnowBlockSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerSideClearFireSystem();
    /**
     * @hash   1043732214
     * @symbol ?createServerSideFreezingSystem@InsidePowderSnowBlockSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerSideFreezingSystem();

};