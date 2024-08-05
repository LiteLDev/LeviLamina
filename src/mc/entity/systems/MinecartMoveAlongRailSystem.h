#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class MinecartMoveAlongRailSystem {
public:
    // prevent constructor by default
    MinecartMoveAlongRailSystem& operator=(MinecartMoveAlongRailSystem const&);
    MinecartMoveAlongRailSystem(MinecartMoveAlongRailSystem const&);
    MinecartMoveAlongRailSystem();

public:
    // NOLINTBEGIN
    MCAPI static bool
    _calculateAllPassengersRailMovementInput(std::vector<struct StrictActorIDEntityContextPair> const&, class Vec3& posDelta, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct ActorRotationComponent const, struct LocalMoveVelocityComponent const>);

    MCAPI static struct TickingSystemWithInfo createCleanupSystem();

    MCAPI static struct TickingSystemWithInfo createPostRailMovementPositionSystem();

    MCAPI static struct TickingSystemWithInfo createPreRailMovementPositionSystem();

    MCAPI static struct TickingSystemWithInfo createRailMovementSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _calculateRailMovementSystem(
        class StrictEntityContext const&   context,
        class RailMovementComponent const& railMovementComponent,
        struct SnapOnRailComponent&,
        struct StateVectorComponent&,
        class Optional<struct VehicleComponent const>,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct PlayerComponentFlag>>,
            struct ActorRotationComponent const,
            struct LocalMoveVelocityComponent const>,
        class EntityModifier<struct MoveRequestComponent> mod
    );

    MCAPI static void
    _postRailMovementCalculateMinecartPositionSystem(class StrictEntityContext const& context, struct SnapOnRailComponent const&, struct StateVectorComponent&, class EntityModifier<struct ActorSetPositionRequestComponent> mod, class IConstBlockSource const&);

    MCAPI static void
    _preRailMovementCalculateMinecartPositionSystem(class StrictEntityContext const& context, struct OffsetsComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&, struct SnapOnRailComponent&, class EntityModifier<struct ActorSetPositionRequestComponent> mod, class IConstBlockSource const&);

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
            struct LocalMoveVelocityComponent const>,
        class EntityModifier<struct MoveRequestComponent> mod
    );

    // NOLINTEND
};
