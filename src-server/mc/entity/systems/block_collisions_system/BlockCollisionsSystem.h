#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySystems;
class StrictEntityContext;
struct AABBShapeComponent;
struct BlockCollisionEvaluationQueueComponent;
struct LocalConstBlockSourceFactoryComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
struct PlayerComponent;
namespace BlockCollisionsSystem { struct BlockCollisionResolutionVectorComponent; }
// clang-format on

namespace BlockCollisionsSystem {
// functions
// NOLINTBEGIN
MCNAPI void _processBlockCollisionMoveRequestsSystem(
    ::OptionalGlobal<::BlockCollisionEvaluationQueueComponent>    queue,
    ::OptionalGlobal<::LocalSpatialEntityFetcherFactoryComponent> fetcherFactoryComponent,
    ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent>     blockSourceFactoryComponent,
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::PlayerComponent>,
        ::AABBShapeComponent const,
        ::ActorOwnerComponent const>                                                   toCheck,
    ::EntityModifier<::BlockCollisionsSystem::BlockCollisionResolutionVectorComponent> modifier
);

MCNAPI void registerSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace BlockCollisionsSystem
