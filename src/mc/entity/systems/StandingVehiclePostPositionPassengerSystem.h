#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class StandingVehiclePostPositionPassengerSystem {
public:
    // prevent constructor by default
    StandingVehiclePostPositionPassengerSystem& operator=(StandingVehiclePostPositionPassengerSystem const&);
    StandingVehiclePostPositionPassengerSystem(StandingVehiclePostPositionPassengerSystem const&);
    StandingVehiclePostPositionPassengerSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _impl(class StrictEntityContext&, struct PassengerComponent const&, struct ActorSetPositionRequestComponent&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const, struct RenderRotationComponent const, struct Include<struct VehicleComponent>, struct RenderPositionComponent const>);

    MCAPI static void _tick(class ViewT<class StrictEntityContext, struct Include<struct PositionPassengerRequestComponent>, struct PassengerComponent const, struct ActorSetPositionRequestComponent> view, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>, struct StandAnimationComponent const, struct RenderRotationComponent const, struct Include<struct VehicleComponent>, struct RenderPositionComponent const>);

    MCAPI static struct TickingSystemWithInfo createSystem();

    // NOLINTEND
};
