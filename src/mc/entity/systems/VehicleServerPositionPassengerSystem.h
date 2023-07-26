#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobalT.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class VehicleServerPositionPassengerSystem {

public:
    // prevent constructor by default
    VehicleServerPositionPassengerSystem& operator=(VehicleServerPositionPassengerSystem const&) = delete;
    VehicleServerPositionPassengerSystem(VehicleServerPositionPassengerSystem const&)            = delete;
    VehicleServerPositionPassengerSystem()                                                       = delete;

public:
    /**
     * @symbol
     * ?_vehicleServerPositionPassengerSystemSingleEntity\@VehicleServerPositionPassengerSystem\@\@SAXAEBVStrictEntityContext\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPassengerComponent\@\@UPositionPassengerRequestComponent\@\@\@\@$$CBUSynchedActorDataComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPassengerComponent\@\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@$$CBUActorHeadRotationComponent\@\@$$CBUPositionPassengerRequestComponent\@\@$$CBUSynchedActorDataComponent\@\@UActorRotationComponent\@\@UMobBodyRotationComponent\@\@UPassengerYRotLimitComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActorSetPositionRequestComponent\@\@\@\@V?$OptionalGlobalT\@UPassengersToPositionComponent\@\@VEntityRegistryBase\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UVehicleComponent\@\@\@\@$$CBUActorRotationComponent\@\@$$CBUStateVectorComponent\@\@V?$Optional\@$$CBUActorSetPositionRequestComponent\@\@\@\@\@\@\@Z
     */
    MCAPI static void _vehicleServerPositionPassengerSystemSingleEntity(class StrictEntityContext const&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent, struct PositionPassengerRequestComponent>, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent, class FlagComponent<struct MobFlag>>, struct ActorHeadRotationComponent const, struct PositionPassengerRequestComponent const, struct SynchedActorDataComponent const, struct ActorRotationComponent, struct MobBodyRotationComponent, struct PassengerYRotLimitComponent, class Optional<class FlagComponent<struct PlayerComponentFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ActorSetPositionRequestComponent>, class OptionalGlobalT<struct PassengersToPositionComponent, class EntityRegistryBase>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct VehicleComponent>, struct ActorRotationComponent const, struct StateVectorComponent const, class Optional<struct ActorSetPositionRequestComponent const>>); // NOLINT
    /**
     * @symbol ?createSystem\@VehicleServerPositionPassengerSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
