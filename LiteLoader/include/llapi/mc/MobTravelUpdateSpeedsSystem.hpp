/**
 * @file  MobTravelUpdateSpeedsSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class MobTravelUpdateSpeedsSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBTRAVELUPDATESPEEDSSYSTEM
public:
    class MobTravelUpdateSpeedsSystem& operator=(class MobTravelUpdateSpeedsSystem const &) = delete;
    MobTravelUpdateSpeedsSystem(class MobTravelUpdateSpeedsSystem const &) = delete;
    MobTravelUpdateSpeedsSystem() = delete;
#endif

public:
    /**
     * @symbol ?createMobTravelUpdateSpeedsSystem\@MobTravelUpdateSpeedsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMobTravelUpdateSpeedsSystem();
    /**
     * @symbol ?tickMobTravelUpdateSpeedsSystem\@MobTravelUpdateSpeedsSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UMobTravelComponent\@\@\@\@$$CBUSynchedActorDataComponent\@\@$$CBUVehicleComponent\@\@UFlySpeedComponent\@\@$$CBUAttributesComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UCanVehicleSprintFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAttributesComponent\@\@$$CBUMovementSpeedComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UMovementSpeedComponent\@\@ULocalMoveVelocityComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@\@\@\@Z
     */
    MCAPI static void tickMobTravelUpdateSpeedsSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct MobTravelComponent>, struct SynchedActorDataComponent const, struct VehicleComponent const, struct FlySpeedComponent, struct AttributesComponent const, class Optional<class FlagComponent<struct CanVehicleSprintFlag> const>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AttributesComponent const, struct MovementSpeedComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct MovementSpeedComponent, struct LocalMoveVelocityComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const>);

};
