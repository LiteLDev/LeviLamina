#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class VehicleServerPositionPassengerSystem {
public:
    // prevent constructor by default
    VehicleServerPositionPassengerSystem& operator=(VehicleServerPositionPassengerSystem const&);
    VehicleServerPositionPassengerSystem(VehicleServerPositionPassengerSystem const&);
    VehicleServerPositionPassengerSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_vehicleServerPositionPassengerSystemSingleEntity@VehicleServerPositionPassengerSystem@@SAXAEBVStrictEntityContext@@V?$ViewT@VStrictEntityContext@@U?$Include@UPassengerComponent@@UPositionPassengerRequestComponent@@@@$$CBUActorDataSeatOffsetComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@UPassengerComponent@@V?$FlagComponent@UMobFlag@@@@@@$$CBUActorHeadRotationComponent@@$$CBUPositionPassengerRequestComponent@@$$CBUSynchedActorDataComponent@@UActorRotationComponent@@UMobBodyRotationComponent@@UPassengerYRotLimitComponent@@V?$Optional@$$CBV?$FlagComponent@UPlayerComponentFlag@@@@@@@@V?$EntityModifier@UActorSetPositionRequestComponent@@@@V?$OptionalGlobal@UPassengersToPositionComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@UVehicleComponent@@@@$$CBUActorRotationComponent@@$$CBUStateVectorComponent@@V?$Optional@$$CBUActorSetPositionRequestComponent@@@@@@@Z
    MCAPI static void _vehicleServerPositionPassengerSystemSingleEntity(class StrictEntityContext const&, class ViewT<class StrictEntityContext, struct Include<struct PassengerComponent, struct PositionPassengerRequestComponent>, struct ActorDataSeatOffsetComponent const>, class ViewT<class StrictEntityContext, struct Include<struct PassengerComponent, class FlagComponent<struct MobFlag>>, struct ActorHeadRotationComponent const, struct PositionPassengerRequestComponent const, struct SynchedActorDataComponent const, struct ActorRotationComponent, struct MobBodyRotationComponent, struct PassengerYRotLimitComponent, class Optional<class FlagComponent<struct PlayerComponentFlag> const>>, class EntityModifier<struct ActorSetPositionRequestComponent>, class OptionalGlobal<struct PassengersToPositionComponent>, class ViewT<class StrictEntityContext, struct Include<struct VehicleComponent>, struct ActorRotationComponent const, struct StateVectorComponent const, class Optional<struct ActorSetPositionRequestComponent const>>);

    // symbol: ?createSystem@VehicleServerPositionPassengerSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
