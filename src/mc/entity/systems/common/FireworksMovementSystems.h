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
// symbol: ?applyBoost@FireworksMovementSystems@@YAXAEAVVec3@@AEBV2@_K@Z
MCAPI void applyBoost(class Vec3&, class Vec3 const&, uint64);

// symbol:
// ?fireworksRocketMoveClientEntity@FireworksMovementSystems@@YA?AW4RocketAttached@1@AEBVStrictEntityContext@@AEBUSynchedActorDataComponent@@AEAUStateVectorComponent@@AEAUActorRotationComponent@@AEAVLocalSpatialEntityFetcher@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UMobFlag@@@@@@$$CBUStateVectorComponent@@@@V?$EntityModifier@UActorSetPositionRequestComponent@@UAttachedRocketsComponent@@@@@Z
MCAPI ::
    FireworksMovementSystems::
        RocketAttached
        fireworksRocketMoveClientEntity(class StrictEntityContext const&, struct SynchedActorDataComponent const&, struct StateVectorComponent&, struct ActorRotationComponent&, class LocalSpatialEntityFetcher&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MobFlag>>, struct StateVectorComponent const> const&, class EntityModifier<struct ActorSetPositionRequestComponent, struct AttachedRocketsComponent>);

// symbol: ?registerAttachedRocketSystems@FireworksMovementSystems@@YAXAEAVEntitySystems@@_N@Z
MCAPI void registerAttachedRocketSystems(class EntitySystems&, bool);

// symbol: ?registerRocketMovementSystems@FireworksMovementSystems@@YAXAEAVEntitySystems@@_N@Z
MCAPI void registerRocketMovementSystems(class EntitySystems&, bool);

// symbol:
// ?removeRocketsNotAttachedToThis@FireworksMovementSystems@@YAXAEBUActorUniqueID@@AEBV?$ViewT@VStrictEntityContext@@$$CBUSynchedActorDataComponent@@@@AEAV?$vector@VStrictEntityContext@@V?$allocator@VStrictEntityContext@@@std@@@std@@@Z
MCAPI void
removeRocketsNotAttachedToThis(struct ActorUniqueID const&, class ViewT<class StrictEntityContext, struct SynchedActorDataComponent const> const&, std::vector<class StrictEntityContext>&);

// symbol:
// ?simulateAttachedRocket@FireworksMovementSystems@@YAXAEBVStrictEntityContext@@AEBUActorUniqueID@@AEAUStateVectorComponent@@AEAVLocalSpatialEntityFetcher@@AEBV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UMobFlag@@@@@@$$CBUStateVectorComponent@@@@V?$EntityModifier@UActorSetPositionRequestComponent@@UAttachedRocketsComponent@@@@@Z
MCAPI void simulateAttachedRocket(class StrictEntityContext const&, struct ActorUniqueID const&, struct StateVectorComponent&, class LocalSpatialEntityFetcher&, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct MobFlag>>, struct StateVectorComponent const> const&, class EntityModifier<struct ActorSetPositionRequestComponent, struct AttachedRocketsComponent>);
// NOLINTEND

}; // namespace FireworksMovementSystems
