/**
 * @file  PlayerMovementStatsEventSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol ?createSystem\@PlayerMovementStatsEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?tickPlayerMovementStatsEventSystem\@PlayerMovementStatsEventSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@VActorOwnerComponent\@\@$$CBUPlayerPreMobTravelComponent\@\@$$CBUStateVectorComponent\@\@\@\@\@Z
     */
    MCAPI static void tickPlayerMovementStatsEventSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, class ActorOwnerComponent, struct PlayerPreMobTravelComponent const, struct StateVectorComponent const>);

};
