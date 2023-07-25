#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class MobTravelUpdateSpeedsSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBTRAVELUPDATESPEEDSSYSTEM
public:
    MobTravelUpdateSpeedsSystem& operator=(MobTravelUpdateSpeedsSystem const&) = delete;
    MobTravelUpdateSpeedsSystem(MobTravelUpdateSpeedsSystem const&)            = delete;
    MobTravelUpdateSpeedsSystem()                                              = delete;
#endif

public:
    /**
     * @symbol ?createMobTravelUpdateSpeedsSystem\@MobTravelUpdateSpeedsSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMobTravelUpdateSpeedsSystem();
    /**
     * @symbol
     * ?tickMobTravelUpdateSpeedsSystem\@MobTravelUpdateSpeedsSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UMobTravelComponent\@\@\@\@$$CBUSynchedActorDataComponent\@\@$$CBUVehicleComponent\@\@UFlySpeedComponent\@\@$$CBUAttributesComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UCanVehicleSprintFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUAttributesComponent\@\@$$CBUMovementSpeedComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UMovementSpeedComponent\@\@ULocalMoveVelocityComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@$$CBUSynchedActorDataComponent\@\@\@\@\@Z
     */
    MCAPI static void
        tickMobTravelUpdateSpeedsSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct MobTravelComponent>, struct SynchedActorDataComponent const, struct VehicleComponent const, struct FlySpeedComponent, struct AttributesComponent const, class Optional<class FlagComponent<struct CanVehicleSprintFlag> const>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct AttributesComponent const, struct MovementSpeedComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct MovementSpeedComponent, struct LocalMoveVelocityComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct SynchedActorDataComponent const>);
};
