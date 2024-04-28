#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockCollisionsSystem { struct BlockCollisionResolutionVectorComponent; }
// clang-format on

namespace BlockCollisionsSystem {
// NOLINTBEGIN
// symbol:
// ?_processBlockCollisionMoveRequestsSystem@BlockCollisionsSystem@@YAXV?$OptionalGlobal@UBlockCollisionEvaluationQueueComponent@@@@V?$OptionalGlobal@ULocalSpatialEntityFetcherFactoryComponent@@@@V?$OptionalGlobal@ULocalConstBlockSourceFactoryComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UPlayerComponentFlag@@@@@@$$CBUAABBShapeComponent@@$$CBVActorOwnerComponent@@@@V?$EntityModifier@UBlockCollisionResolutionVectorComponent@BlockCollisionsSystem@@@@@Z
MCAPI void _processBlockCollisionMoveRequestsSystem(class OptionalGlobal<struct BlockCollisionEvaluationQueueComponent>, class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent>, class OptionalGlobal<struct LocalConstBlockSourceFactoryComponent>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct PlayerComponentFlag>>, struct AABBShapeComponent const, class ActorOwnerComponent const>, class EntityModifier<struct BlockCollisionsSystem::BlockCollisionResolutionVectorComponent>);

// symbol: ?registerSystems@BlockCollisionsSystem@@YAXAEAVEntitySystems@@_N@Z
MCAPI void registerSystems(class EntitySystems&, bool);
// NOLINTEND

}; // namespace BlockCollisionsSystem
