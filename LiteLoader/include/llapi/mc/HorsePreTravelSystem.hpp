/**
 * @file  HorsePreTravelSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class HorsePreTravelSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HORSEPRETRAVELSYSTEM
public:
    class HorsePreTravelSystem& operator=(class HorsePreTravelSystem const &) = delete;
    HorsePreTravelSystem(class HorsePreTravelSystem const &) = delete;
    HorsePreTravelSystem() = delete;
#endif

public:
    /**
     * @symbol ?createHorsePreTravelSystem\@HorsePreTravelSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createHorsePreTravelSystem();
    /**
     * @symbol ?tickHorsePreTravelSystem\@HorsePreTravelSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@V?$Optional\@UVehicleComponent\@\@\@\@$$CBUSynchedActorDataComponent\@\@UFlySpeedComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UHorseFlag\@\@\@\@\@\@$$CBUVehicleComponent\@\@$$CBUSynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UMobFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UWasOnGroundPreTravelFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickHorsePreTravelSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct HorseFlag>>, class Optional<struct VehicleComponent>, struct SynchedActorDataComponent const, struct FlySpeedComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct HorseFlag>>, struct VehicleComponent const, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct MobFlag> const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct LocalPlayerComponentFlag> const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, class FlagComponent<struct OnGroundFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct WasOnGroundPreTravelFlag>>);

};
