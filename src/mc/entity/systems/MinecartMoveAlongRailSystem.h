#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class MinecartMoveAlongRailSystem {
public:
    // prevent constructor by default
    MinecartMoveAlongRailSystem& operator=(MinecartMoveAlongRailSystem const&);
    MinecartMoveAlongRailSystem(MinecartMoveAlongRailSystem const&);
    MinecartMoveAlongRailSystem();

public:
    // NOLINTBEGIN
    MCAPI static bool _calculateAllPassengersRailMovementInput(
        std::vector<struct StrictActorIDEntityContextPair> const& passengers,
        class Vec3&                                               posDelta,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct PlayerComponentFlag>>,
            struct ActorRotationComponent const,
            struct LocalMoveVelocityComponent const> playerView
    );

    MCAPI static struct TickingSystemWithInfo createCleanupSystem();

    MCAPI static struct TickingSystemWithInfo createPostRailMovementPositionSystem();

    MCAPI static struct TickingSystemWithInfo createPreRailMovementPositionSystem();

    MCAPI static struct TickingSystemWithInfo createRailMovementSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _calculateRailMovementSystem(
        class StrictEntityContext const&              context,
        class RailMovementComponent const&            railMovementComponent,
        struct SnapOnRailComponent&                   snapOnRailComponent,
        struct StateVectorComponent&                  stateVectorComponent,
        class Optional<struct VehicleComponent const> vehicleComponent,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct PlayerComponentFlag>>,
            struct ActorRotationComponent const,
            struct LocalMoveVelocityComponent const>      playerView,
        class EntityModifier<struct MoveRequestComponent> mod
    );

    MCAPI static void _postRailMovementCalculateMinecartPositionSystem(
        class StrictEntityContext const&                              context,
        struct SnapOnRailComponent const&                             snapOnRailComponent,
        struct StateVectorComponent&                                  stateVectorComponent,
        class EntityModifier<struct ActorSetPositionRequestComponent> mod,
        class IConstBlockSource const&                                constBlockSource
    );

    MCAPI static void _preRailMovementCalculateMinecartPositionSystem(
        class StrictEntityContext const&                              context,
        struct OffsetsComponent const&                                offsetsComponent,
        struct StateVectorComponent const&                            stateVectorComponent,
        struct FallDistanceComponent&                                 fallDistanceComponent,
        struct SnapOnRailComponent&                                   snapOnRailComponent,
        class EntityModifier<struct ActorSetPositionRequestComponent> mod,
        class IConstBlockSource const&                                constBlockSource
    );

    MCAPI static void _tickCalculateRailMovementSystem(
        class ViewT<
            class StrictEntityContext,
            class RailMovementComponent const,
            struct SnapOnRailComponent,
            struct StateVectorComponent,
            class Optional<struct VehicleComponent const>> view,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct PlayerComponentFlag>>,
            struct ActorRotationComponent const,
            struct LocalMoveVelocityComponent const>      playerView,
        class EntityModifier<struct MoveRequestComponent> mod
    );

    // NOLINTEND
};
