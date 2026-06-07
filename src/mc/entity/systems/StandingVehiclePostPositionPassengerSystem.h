#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorSetPositionRequestComponent;
struct HorseFlagComponent;
struct PassengerComponent;
struct RenderPositionComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

struct StandingVehiclePostPositionPassengerSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _impl(
        ::StrictEntityContext&              passengerComponent,
        ::PassengerComponent const&         setPositionRequest,
        ::ActorSetPositionRequestComponent& horseView,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::HorseFlagComponent>,
            ::StandAnimationComponent const,
            ::RenderRotationComponent const,
            ::Include<::VehicleComponent>,
            ::RenderPositionComponent const>
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
