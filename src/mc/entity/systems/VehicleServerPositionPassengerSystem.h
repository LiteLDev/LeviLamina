#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

class VehicleServerPositionPassengerSystem {
public:
    // prevent constructor by default
    VehicleServerPositionPassengerSystem& operator=(VehicleServerPositionPassengerSystem const&);
    VehicleServerPositionPassengerSystem(VehicleServerPositionPassengerSystem const&);
    VehicleServerPositionPassengerSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _vehicleServerPositionPassengerSystemSingleEntity(class StrictEntityContext const&, class ViewT<class StrictEntityContext, struct Include<struct PassengerComponent, struct PositionPassengerRequestComponent>, struct ActorDataSeatOffsetComponent const>, class ViewT<class StrictEntityContext, struct Include<struct PassengerComponent, class FlagComponent<struct MobFlag>>, struct ActorHeadRotationComponent const, struct PositionPassengerRequestComponent const, struct SynchedActorDataComponent const, struct ActorRotationComponent, struct MobBodyRotationComponent, struct PassengerYRotLimitComponent, class Optional<class FlagComponent<struct PlayerComponentFlag> const>>, class EntityModifier<struct ActorSetPositionRequestComponent>, class OptionalGlobal<struct PassengersToPositionComponent>, class ViewT<class StrictEntityContext, struct Include<struct VehicleComponent>, struct ActorRotationComponent const, struct StateVectorComponent const, class Optional<struct ActorSetPositionRequestComponent const>>);

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
