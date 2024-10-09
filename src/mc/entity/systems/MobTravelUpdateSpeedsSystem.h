#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class MobTravelUpdateSpeedsSystem {
public:
    // prevent constructor by default
    MobTravelUpdateSpeedsSystem& operator=(MobTravelUpdateSpeedsSystem const&);
    MobTravelUpdateSpeedsSystem(MobTravelUpdateSpeedsSystem const&);
    MobTravelUpdateSpeedsSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo createMobTravelUpdateSpeedsSystem();

    MCAPI static void tickMobTravelUpdateSpeedsSystem(
        class ViewT<
            class StrictEntityContext,
            struct Include<struct MobTravelComponent>,
            struct ActorDataFlagComponent const,
            struct ActorDataControllingSeatIndexComponent const,
            struct VehicleComponent const,
            struct AirSpeedComponent,
            struct MovementAttributesComponent const,
            class Optional<class FlagComponent<struct CanVehicleSprintFlag> const>> view,
        class ViewT<
            class StrictEntityContext,
            struct MovementAttributesComponent const,
            struct MovementSpeedComponent const> speedData,
        class ViewT<class StrictEntityContext, struct MovementSpeedComponent, struct LocalMoveVelocityComponent>
            mutableSpeedData,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>> players,
        class ViewT<class StrictEntityContext, struct ActorDataFlagComponent const> actorDataView
    );

    // NOLINTEND
};
