#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
class Vec3;
struct ActorRotationComponent;
struct ActorSetPositionRequestComponent;
struct FallDistanceComponent;
struct LocalMoveVelocityComponent;
struct MoveRequestComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct RailMovementComponent;
struct SnapOnRailComponent;
struct StateVectorComponent;
struct StrictActorIDEntityContextPair;
struct TickingSystemWithInfo;
struct VehicleComponent;
// clang-format on

class MinecartMoveAlongRailSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _calculateAllPassengersRailMovementInput(
        ::std::vector<::StrictActorIDEntityContextPair> const& passengers,
        ::Vec3&                                                posDelta,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::PlayerComponent>,
            ::ActorRotationComponent const,
            ::LocalMoveVelocityComponent const> playerView
    );

    MCAPI static void _calculateRailMovementSystem(
        ::StrictEntityContext const&         context,
        ::RailMovementComponent const&       railMovementComponent,
        ::SnapOnRailComponent&               snapOnRailComponent,
        ::StateVectorComponent&              stateVectorComponent,
        ::Optional<::VehicleComponent const> vehicleComponent,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::PlayerComponent>,
            ::ActorRotationComponent const,
            ::LocalMoveVelocityComponent const>  playerView,
        ::EntityModifier<::MoveRequestComponent> mod
    );

    MCAPI static void _postRailMovementCalculateMinecartPositionSystem(
        ::StrictEntityContext const&                         context,
        ::SnapOnRailComponent const&                         snapOnRailComponent,
        ::StateVectorComponent&                              stateVectorComponent,
        ::EntityModifier<::ActorSetPositionRequestComponent> mod,
        ::IConstBlockSource const&                           constBlockSource
    );

    MCAPI static void _preRailMovementCalculateMinecartPositionSystem(
        ::StrictEntityContext const&                         context,
        ::OffsetsComponent const&                            offsetsComponent,
        ::StateVectorComponent const&                        stateVectorComponent,
        ::FallDistanceComponent&                             fallDistanceComponent,
        ::SnapOnRailComponent&                               snapOnRailComponent,
        ::EntityModifier<::ActorSetPositionRequestComponent> mod,
        ::IConstBlockSource const&                           constBlockSource
    );

    MCAPI static void _tickCalculateRailMovementSystem(
        ::ViewT<
            ::StrictEntityContext,
            ::RailMovementComponent const,
            ::SnapOnRailComponent,
            ::StateVectorComponent,
            ::Optional<::VehicleComponent const>> view,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::PlayerComponent>,
            ::ActorRotationComponent const,
            ::LocalMoveVelocityComponent const>  playerView,
        ::EntityModifier<::MoveRequestComponent> mod
    );

    MCAPI static ::TickingSystemWithInfo createCleanupSystem();

    MCAPI static ::TickingSystemWithInfo createPostRailMovementPositionSystem();
    // NOLINTEND
};
