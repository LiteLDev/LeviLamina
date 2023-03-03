/**
 * @file  ActorMovementTickFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorMovementTickFilterSystem.
 *
 */
class ActorMovementTickFilterSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORMOVEMENTTICKFILTERSYSTEM
public:
    class ActorMovementTickFilterSystem& operator=(class ActorMovementTickFilterSystem const &) = delete;
    ActorMovementTickFilterSystem(class ActorMovementTickFilterSystem const &) = delete;
    ActorMovementTickFilterSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createBase\@ActorMovementTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createBase();
    /**
     * @symbol  ?createInputPacketDependentFilter\@ActorMovementTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createInputPacketDependentFilter();

};