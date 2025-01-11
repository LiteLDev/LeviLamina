#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct AirSpeedComponent;
struct CanVehicleSprintFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct MovementSpeedComponent;
struct PlayerComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class MobTravelUpdateSpeedsSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createMobTravelUpdateSpeedsSystem();

    MCAPI static void tickMobTravelUpdateSpeedsSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::MobTravelComponent>,
            ::ActorDataFlagComponent const,
            ::ActorDataControllingSeatIndexComponent const,
            ::VehicleComponent const,
            ::AirSpeedComponent,
            ::MovementAttributesComponent const,
            ::MovementSpeedComponent,
            ::Optional<::CanVehicleSprintFlagComponent const>>         view,
        ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>>   players,
        ::ViewT<::StrictEntityContext, ::ActorDataFlagComponent const> actorDataView
    );
    // NOLINTEND
};
