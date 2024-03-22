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
    // symbol:
    // ?_calculateAllPassengersRailMovementInput@MinecartMoveAlongRailSystem@@SA_NAEBV?$vector@UStrictActorIDEntityContextPair@@V?$allocator@UStrictActorIDEntityContextPair@@@std@@@std@@AEAVVec3@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@$$CBUActorRotationComponent@@$$CBULocalMoveVelocityComponent@@@@@Z
    MCAPI static bool
    _calculateAllPassengersRailMovementInput(std::vector<struct StrictActorIDEntityContextPair> const&, class Vec3& posDelta, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct ActorRotationComponent const, struct LocalMoveVelocityComponent const>);

    // symbol: ?createCleanupSystem@MinecartMoveAlongRailSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();

    // symbol: ?createPostRailMovementPositionSystem@MinecartMoveAlongRailSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPostRailMovementPositionSystem();

    // symbol: ?createPreRailMovementPositionSystem@MinecartMoveAlongRailSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createPreRailMovementPositionSystem();

    // symbol: ?createRailMovementSystem@MinecartMoveAlongRailSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createRailMovementSystem();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_calculateRailMovementSystem@MinecartMoveAlongRailSystem@@CAXAEBVStrictEntityContext@@AEBVRailMovementComponent@@AEAUSnapOnRailComponent@@AEAUStateVectorComponent@@V?$Optional@$$CBUVehicleComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@$$CBUActorRotationComponent@@$$CBULocalMoveVelocityComponent@@@@V?$EntityModifier@UMoveRequestComponent@@@@@Z
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

    // symbol:
    // ?_postRailMovementCalculateMinecartPositionSystem@MinecartMoveAlongRailSystem@@CAXAEBVStrictEntityContext@@AEBUSnapOnRailComponent@@AEAUStateVectorComponent@@V?$EntityModifier@UActorSetPositionRequestComponent@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void
    _postRailMovementCalculateMinecartPositionSystem(class StrictEntityContext const& context, struct SnapOnRailComponent const&, struct StateVectorComponent&, class EntityModifier<struct ActorSetPositionRequestComponent> mod, class IConstBlockSource const&);

    // symbol:
    // ?_preRailMovementCalculateMinecartPositionSystem@MinecartMoveAlongRailSystem@@CAXAEBVStrictEntityContext@@AEBUOffsetsComponent@@AEBUStateVectorComponent@@AEAUFallDistanceComponent@@AEAUSnapOnRailComponent@@V?$EntityModifier@UActorSetPositionRequestComponent@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void
    _preRailMovementCalculateMinecartPositionSystem(class StrictEntityContext const& context, struct OffsetsComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&, struct SnapOnRailComponent&, class EntityModifier<struct ActorSetPositionRequestComponent> mod, class IConstBlockSource const&);

    // symbol:
    // ?_tickCalculateRailMovementSystem@MinecartMoveAlongRailSystem@@CAXV?$ViewT@VStrictEntityContext@@$$CBVRailMovementComponent@@USnapOnRailComponent@@UStateVectorComponent@@V?$Optional@$$CBUVehicleComponent@@@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@$$CBUActorRotationComponent@@$$CBULocalMoveVelocityComponent@@@@V?$EntityModifier@UMoveRequestComponent@@@@@Z
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
