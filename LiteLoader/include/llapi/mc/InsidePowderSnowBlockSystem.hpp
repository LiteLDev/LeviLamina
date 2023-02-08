/**
 * @file  InsidePowderSnowBlockSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?createClientSideSpawnParticleSystem\@InsidePowderSnowBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClientSideSpawnParticleSystem();
    /**
     * @hash   -363961370
     * @symbol  ?createMovementSlowdownSystem\@InsidePowderSnowBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMovementSlowdownSystem();
    /**
     * @hash   1959027764
     * @symbol  ?createServerSideClearFireSystem\@InsidePowderSnowBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerSideClearFireSystem();
    /**
     * @hash   1404099526
     * @symbol  ?createServerSideFreezingSystem\@InsidePowderSnowBlockSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createServerSideFreezingSystem();

};