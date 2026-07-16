#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorRotationComponent;
struct FallDistanceComponent;
struct LocalMoveVelocityComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct RailMovementComponent;
struct SnapOnRailComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class MinecartMoveAlongRailSystem {
public:
    // MinecartMoveAlongRailSystem inner types define
    using MoveView = ::ViewT<
        ::StrictEntityContext,
        ::RailMovementComponent const,
        ::SnapOnRailComponent,
        ::StateVectorComponent,
        ::Optional<::VehicleComponent const>>;

    using PlayerView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::PlayerComponent>,
        ::ActorRotationComponent const,
        ::LocalMoveVelocityComponent const>;

    using PostMoveView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::RailMovementComponent>,
        ::SnapOnRailComponent const,
        ::StateVectorComponent>;

    using PreMoveView = ::ViewT<
        ::StrictEntityContext,
        ::Include<::RailMovementComponent>,
        ::OffsetsComponent const,
        ::StateVectorComponent const,
        ::FallDistanceComponent,
        ::SnapOnRailComponent>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createPostRailMovementPositionSystem();

    MCAPI static ::TickingSystemWithInfo createPreRailMovementPositionSystem();

    MCAPI static ::TickingSystemWithInfo createRailMovementSystem();
    // NOLINTEND
};
