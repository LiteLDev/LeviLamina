/**
 * @file  MinecartMoveAlongRailSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecartMoveAlongRailSystem.
 *
 */
class MinecartMoveAlongRailSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTMOVEALONGRAILSYSTEM
public:
    class MinecartMoveAlongRailSystem& operator=(class MinecartMoveAlongRailSystem const &) = delete;
    MinecartMoveAlongRailSystem(class MinecartMoveAlongRailSystem const &) = delete;
    MinecartMoveAlongRailSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_calculateAllPassengersRailMovementInput\@MinecartMoveAlongRailSystem\@\@SA_NAEBV?$vector\@UStrictActorIDEntityContextPair\@\@V?$allocator\@UStrictActorIDEntityContextPair\@\@\@std\@\@\@std\@\@AEAVVec3\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@$$CBUActorRotationComponent\@\@$$CBULocalMoveVelocityComponent\@\@\@\@\@Z
     */
    MCAPI static bool _calculateAllPassengersRailMovementInput(std::vector<struct StrictActorIDEntityContextPair> const &, class Vec3 &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct ActorRotationComponent const, struct LocalMoveVelocityComponent const>);
    /**
     * @symbol  ?createCleanupSystem\@MinecartMoveAlongRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createCleanupSystem();
    /**
     * @symbol  ?createPostRailMovementPositionSystem\@MinecartMoveAlongRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPostRailMovementPositionSystem();
    /**
     * @symbol  ?createPreRailMovementPositionSystem\@MinecartMoveAlongRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPreRailMovementPositionSystem();
    /**
     * @symbol  ?createRailMovementSystem\@MinecartMoveAlongRailSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRailMovementSystem();

//private:
    /**
     * @symbol  ?_calculateRailMovementSystem\@MinecartMoveAlongRailSystem\@\@CAXAEBVStrictEntityContext\@\@AEBVRailMovementComponent\@\@AEAUSnapOnRailComponent\@\@AEAUStateVectorComponent\@\@V?$Optional\@$$CBUVehicleComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@$$CBUActorRotationComponent\@\@$$CBULocalMoveVelocityComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@\@Z
     */
    MCAPI static void _calculateRailMovementSystem(class StrictEntityContext const &, class RailMovementComponent const &, struct SnapOnRailComponent &, struct StateVectorComponent &, class Optional<struct VehicleComponent const>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct ActorRotationComponent const, struct LocalMoveVelocityComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>);
    /**
     * @symbol  ?_postRailMovementCalculateMinecartPositionSystem\@MinecartMoveAlongRailSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUSnapOnRailComponent\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActorSetPositionRequestComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void _postRailMovementCalculateMinecartPositionSystem(class StrictEntityContext const &, struct SnapOnRailComponent const &, struct StateVectorComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ActorSetPositionRequestComponent>, class IConstBlockSource const &);
    /**
     * @symbol  ?_preRailMovementCalculateMinecartPositionSystem\@MinecartMoveAlongRailSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUOffsetsComponent\@\@AEBUStateVectorComponent\@\@AEAUFallDistanceComponent\@\@AEAUSnapOnRailComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UActorSetPositionRequestComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void _preRailMovementCalculateMinecartPositionSystem(class StrictEntityContext const &, struct OffsetsComponent const &, struct StateVectorComponent const &, struct FallDistanceComponent &, struct SnapOnRailComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ActorSetPositionRequestComponent>, class IConstBlockSource const &);

private:

};