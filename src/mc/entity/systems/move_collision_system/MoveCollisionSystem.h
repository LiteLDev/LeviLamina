#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

// auto generated forward declare list
// clang-format off
namespace BlockSourceVisitor { struct CollisionShape; }
// clang-format on

namespace MoveCollisionSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createCollisionShapesCopySystem();

MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void fetchCollisionShapes(
    class StrictEntityContext const&                                        entity,
    struct AABBShapeComponent const&                                        aabb,
    struct MaxAutoStepComponent const&                                      autoStep,
    class Optional<class FlagComponent<struct CollidableMobNearFlag> const> collidableMobNear,
    struct MoveRequestComponent&                                            request,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct CollidableMobFlag>>,
        struct AABBShapeComponent const> const& collidableMobs,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>> const&
                                                            fallingBlocks,
    class IConstBlockSource const&                          region,
    class LocalSpatialEntityFetcher&                        fetcher,
    class GetCollisionShapeInterface const&                 collisionShape,
    std::vector<struct BlockSourceVisitor::CollisionShape>& tempCollisionShapes
);

MCAPI std::vector<class AABB> getFetchBoxSubtraction(class AABB const& newBox, class AABB const& fetchedBox);
// NOLINTEND

}; // namespace MoveCollisionSystem
