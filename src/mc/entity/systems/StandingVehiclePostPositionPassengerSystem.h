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
struct PositionPassengerRequestComponent;
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
        ::StrictEntityContext&,
        ::PassengerComponent const&         passengerComponent,
        ::ActorSetPositionRequestComponent& setPositionRequest,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::HorseFlagComponent>,
            ::StandAnimationComponent const,
            ::RenderRotationComponent const,
            ::Include<::VehicleComponent>,
            ::RenderPositionComponent const> horseView
    );

    MCAPI static void _tickSingleEntity(
        ::StrictEntityContext const& entityContext,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::PositionPassengerRequestComponent>,
            ::PassengerComponent const,
            ::ActorSetPositionRequestComponent> view,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::HorseFlagComponent>,
            ::StandAnimationComponent const,
            ::RenderRotationComponent const,
            ::Include<::VehicleComponent>,
            ::RenderPositionComponent const> horseView
    );

    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
