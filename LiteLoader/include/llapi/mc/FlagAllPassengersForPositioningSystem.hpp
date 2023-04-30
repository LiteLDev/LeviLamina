/**
 * @file  FlagAllPassengersForPositioningSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class FlagAllPassengersForPositioningSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLAGALLPASSENGERSFORPOSITIONINGSYSTEM
public:
    class FlagAllPassengersForPositioningSystem& operator=(class FlagAllPassengersForPositioningSystem const &) = delete;
    FlagAllPassengersForPositioningSystem(class FlagAllPassengersForPositioningSystem const &) = delete;
    FlagAllPassengersForPositioningSystem() = delete;
#endif

public:
    /**
     * @symbol ?_tick\@FlagAllPassengersForPositioningSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UPassengerComponent\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UPositionPassengerRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct PassengerComponent>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct PositionPassengerRequestComponent>);
    /**
     * @symbol ?create\@FlagAllPassengersForPositioningSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();

};
