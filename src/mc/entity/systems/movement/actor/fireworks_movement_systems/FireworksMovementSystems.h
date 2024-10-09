#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"
#include "mc/entity/systems/movement/actor/fireworks_movement_systems/RocketAttached.h"

namespace FireworksMovementSystems {
// NOLINTBEGIN
MCAPI void applyBoost(class Vec3& posDelta, class Vec3 const& lookAngle, uint64 count);

MCAPI ::FireworksMovementSystems::RocketAttached fireworksRocketMoveClientEntity(
    class StrictEntityContext const&        rocket,
    struct SynchedActorDataComponent const& rocketData,
    struct StateVectorComponent&            rocketStateVector,
    struct ActorRotationComponent&          rocketRotation,
    class LocalSpatialEntityFetcher&        fetcher,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct MobFlag>>,
        struct StateVectorComponent const> const&                                                  stateVectors,
    class EntityModifier<struct ActorSetPositionRequestComponent, struct AttachedRocketsComponent> modifier
);

MCAPI void fireworksRocketMoveServerEntity(
    class StrictEntityContext const&        rocket,
    struct SynchedActorDataComponent const& rocketData,
    struct StateVectorComponent&            rocketStateVector,
    struct ActorRotationComponent&          rocketRotation,
    class LocalSpatialEntityFetcher&        fetcher,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct MobFlag>>,
        struct StateVectorComponent const> const&                                                  stateVectors,
    class EntityModifier<struct ActorSetPositionRequestComponent, struct AttachedRocketsComponent> clientModifier,
    class EntityModifier<struct MoveRequestComponent>                                              serverModifier
);

MCAPI void registerAttachedRocketSystems(class EntitySystems& systemRegistry, bool isUsingClientRewind);

MCAPI void registerRocketMovementSystems(class EntitySystems& systemRegistry, bool isClientSide);

MCAPI void simulateAttachedRocket(
    class StrictEntityContext const& rocket,
    struct ActorUniqueID const&      attachedID,
    struct StateVectorComponent&     rocketStateVector,
    class LocalSpatialEntityFetcher& fetcher,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct MobFlag>>,
        struct StateVectorComponent const> const&                                                  stateVectors,
    class EntityModifier<struct ActorSetPositionRequestComponent, struct AttachedRocketsComponent> modifier
);
// NOLINTEND

}; // namespace FireworksMovementSystems
