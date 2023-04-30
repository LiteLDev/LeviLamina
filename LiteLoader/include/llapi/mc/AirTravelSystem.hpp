/**
 * @file  AirTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class AirTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AIRTRAVELSYSTEM
public:
    class AirTravelSystem& operator=(class AirTravelSystem const &) = delete;
    AirTravelSystem(class AirTravelSystem const &) = delete;
    AirTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createAirTravelSystem\@AirTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAirTravelSystem();
    /**
     * @symbol ?tickAirTravelSystem\@AirTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@V?$FlagComponent\@UAirTravelFlag\@\@\@\@\@\@$$CBUFlySpeedComponent\@\@UMobTravelComponent\@\@\@\@\@Z
     */
    MCAPI static void tickAirTravelSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct AirTravelFlag>>, struct FlySpeedComponent const, struct MobTravelComponent>);

};
