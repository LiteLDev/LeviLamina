#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

class SpatialQueryUtility {
public:
    // prevent constructor by default
    SpatialQueryUtility& operator=(SpatialQueryUtility const&);
    SpatialQueryUtility(SpatialQueryUtility const&);
    SpatialQueryUtility();

public:
    // NOLINTBEGIN
    MCAPI static bool forEachBlockInAABB(
        class IConstBlockSource const&                                        region,
        class AABB const&                                                     aabb,
        float                                                                 grow,
        std::function<void(class Block const&, class BlockPos const&)> const& callback
    );

    MCAPI static void testForCollidableMobs(
        class StrictEntityContext const& except,
        class LocalSpatialEntityFetcher& fetcher,
        class AABB const&                actorAABB,
        class AABB const&                intersectTestBox,
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct CollidableMobFlag>>,
            struct AABBShapeComponent const> view,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>>
                                fallingBlockView,
        struct CollisionShapes& collisionShapes
    );

    // NOLINTEND
};
