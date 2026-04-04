#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataControllingSeatIndexComponent;
struct ActorDataFlagComponent;
struct DashActionComponent;
struct JumpPendingScaleComponent;
struct MobIsJumpingFlagComponent;
struct MobTravelComponent;
struct MovementAttributesComponent;
struct OnGroundFlagComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
struct WasInLavaFlagComponent;
struct WasInWaterFlagComponent;
// clang-format on

struct TriggerJumpSystem {
public:
    // TriggerJumpSystem inner types define
    using ViewType = ::ViewT<
        ::StrictEntityContext,
        ::Include<::MobTravelComponent>,
        ::ActorDataFlagComponent const,
        ::ActorDataControllingSeatIndexComponent const,
        ::VehicleComponent const,
        ::AABBShapeComponent const,
        ::StateVectorComponent const,
        ::JumpPendingScaleComponent const,
        ::MovementAttributesComponent const,
        ::Optional<::OnGroundFlagComponent const>,
        ::Optional<::DashActionComponent const>,
        ::Optional<::MobIsJumpingFlagComponent const>,
        ::Optional<::WasInLavaFlagComponent const>,
        ::Optional<::WasInWaterFlagComponent const>>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createCleanupSystem();
    // NOLINTEND
};
