#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/entity/systems/common/RocketAttached.h"
#include "mc/world/components/FlagComponent.h"

namespace FireworksMovementSystems {
// NOLINTBEGIN
MCAPI void applyBoost(class Vec3&, class Vec3 const&, uint64);

MCAPI ::
    FireworksMovementSystems::
        RocketAttached
        fireworksRocketMoveClientEntity(class StrictEntityContext const&, struct SynchedActorDataComponent const&, struct StateVectorComponent&, struct ActorRotationComponent&, class LocalSpatialEntityFetcher&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MobFlag>>, struct StateVectorComponent const> const&, class EntityModifier<struct ActorSetPositionRequestComponent, struct AttachedRocketsComponent>);

MCAPI void fireworksRocketMoveServerEntity(class StrictEntityContext const&, struct SynchedActorDataComponent const&, struct StateVectorComponent&, struct ActorRotationComponent&, class LocalSpatialEntityFetcher&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MobFlag>>, struct StateVectorComponent const> const&, class EntityModifier<struct ActorSetPositionRequestComponent, struct AttachedRocketsComponent>, class EntityModifier<struct MoveRequestComponent>);

MCAPI void registerAttachedRocketSystems(class EntitySystems&, bool);

MCAPI void registerRocketMovementSystems(class EntitySystems&, bool);

MCAPI void simulateAttachedRocket(class StrictEntityContext const&, struct ActorUniqueID const&, struct StateVectorComponent&, class LocalSpatialEntityFetcher&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MobFlag>>, struct StateVectorComponent const> const&, class EntityModifier<struct ActorSetPositionRequestComponent, struct AttachedRocketsComponent>);
// NOLINTEND

}; // namespace FireworksMovementSystems
