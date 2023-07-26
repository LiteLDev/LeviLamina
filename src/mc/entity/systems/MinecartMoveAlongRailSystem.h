#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class MinecartMoveAlongRailSystem {

public:
    // prevent constructor by default
    MinecartMoveAlongRailSystem& operator=(MinecartMoveAlongRailSystem const&) = delete;
    MinecartMoveAlongRailSystem(MinecartMoveAlongRailSystem const&)            = delete;
    MinecartMoveAlongRailSystem()                                              = delete;

public:
    /**
     * @symbol
     * ?_calculateAllPassengersRailMovementInput\@MinecartMoveAlongRailSystem\@\@SA_NAEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@AEAVVec3\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@$$CBUActorRotationComponent\@\@$$CBULocalMoveVelocityComponent\@\@\@\@\@Z
     */
    MCAPI static bool
    _calculateAllPassengersRailMovementInput(std::vector<struct StrictActorIDEntityContextPair> const&, class Vec3&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct ActorRotationComponent const, struct LocalMoveVelocityComponent const>); // NOLINT
    /**
     * @symbol ?createCleanupSystem\@MinecartMoveAlongRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem(); // NOLINT
    /**
     * @symbol ?createPostRailMovementPositionSystem\@MinecartMoveAlongRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPostRailMovementPositionSystem(); // NOLINT
    /**
     * @symbol ?createPreRailMovementPositionSystem\@MinecartMoveAlongRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPreRailMovementPositionSystem(); // NOLINT
    /**
     * @symbol ?createRailMovementSystem\@MinecartMoveAlongRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRailMovementSystem(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_calculateRailMovementSystem\@MinecartMoveAlongRailSystem\@\@CAXAEBVStrictEntityContext\@\@AEBVRailMovementComponent\@\@AEAUSnapOnRailComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@$$CBUActorRotationComponent\@\@$$CBULocalMoveVelocityComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _calculateRailMovementSystem(class StrictEntityContext const&, class RailMovementComponent const&, struct SnapOnRailComponent&, struct StateVectorComponent&, class Optional<struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct ActorRotationComponent const, struct LocalMoveVelocityComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>); // NOLINT
    /**
     * @symbol
     * ?_postRailMovementCalculateMinecartPositionSystem\@MinecartMoveAlongRailSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUSnapOnRailComponent\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActorSetPositionRequestComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    _postRailMovementCalculateMinecartPositionSystem(class StrictEntityContext const&, struct SnapOnRailComponent const&, struct StateVectorComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ActorSetPositionRequestComponent>, class IConstBlockSource const&); // NOLINT
    /**
     * @symbol
     * ?_preRailMovementCalculateMinecartPositionSystem\@MinecartMoveAlongRailSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUOffsetsComponent\@\@AEBUStateVectorComponent\@\@AEAUFallDistanceComponent\@\@AEAUSnapOnRailComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActorSetPositionRequestComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    _preRailMovementCalculateMinecartPositionSystem(class StrictEntityContext const&, struct OffsetsComponent const&, struct StateVectorComponent const&, struct FallDistanceComponent&, struct SnapOnRailComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ActorSetPositionRequestComponent>, class IConstBlockSource const&); // NOLINT

private:
};
