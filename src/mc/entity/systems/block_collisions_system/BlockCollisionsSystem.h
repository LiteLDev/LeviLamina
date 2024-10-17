#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockCollisionsSystem { struct BlockCollisionResolutionVectorComponent; }
// clang-format on

namespace BlockCollisionsSystem {
// NOLINTBEGIN
MCAPI void _processBlockCollisionMoveRequestsSystem(
    class OptionalGlobal<struct BlockCollisionEvaluationQueueComponent>    queue,
    class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent> fetcherFactoryComponent,
    class OptionalGlobal<struct LocalConstBlockSourceFactoryComponent>     blockSourceFactoryComponent,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct PlayerComponentFlag>>,
        struct AABBShapeComponent const,
        class ActorOwnerComponent const>                                                        toCheck,
    class EntityModifier<struct BlockCollisionsSystem::BlockCollisionResolutionVectorComponent> modifier
);

MCAPI void registerSystems(class EntitySystems& systemRegistry, bool isUsingClientRewind);
// NOLINTEND

}; // namespace BlockCollisionsSystem
