#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorDataSeatOffsetComponent;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct PassengerComponent;
struct PassengerYRotLimitComponent;
struct PlayerComponent;
struct PositionPassengerRequestComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class VehicleServerPositionPassengerSystem {
public:
    // VehicleServerPositionPassengerSystem inner types define
    using PositionPassengerView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::PassengerComponent, ::PositionPassengerRequestComponent>,
        ::ActorDataSeatOffsetComponent const>;

    using RotateMobPassengerView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::PassengerComponent, ::MobFlagComponent>,
        ::ActorHeadRotationComponent const,
        ::PositionPassengerRequestComponent const,
        ::SynchedActorDataComponent const,
        ::ActorRotationComponent,
        ::MobBodyRotationComponent,
        ::PassengerYRotLimitComponent,
        ::Optional<::PlayerComponent const>>;

    using VehicleView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::VehicleComponent>,
        ::ActorRotationComponent const,
        ::StateVectorComponent const,
        ::Optional<::ActorSetPositionRequestComponent const>>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createSystem();
    // NOLINTEND
};
