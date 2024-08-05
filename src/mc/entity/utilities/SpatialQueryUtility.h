#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class SpatialQueryUtility {
public:
    // prevent constructor by default
    SpatialQueryUtility& operator=(SpatialQueryUtility const&);
    SpatialQueryUtility(SpatialQueryUtility const&);
    SpatialQueryUtility();

public:
    // NOLINTBEGIN
    MCAPI static bool
    forEachBlockInAABB(class IConstBlockSource const&, class AABB const&, float, std::function<void(class Block const&, class BlockPos const&)> const&);

    MCAPI static void
    testForCollidableMobs(class StrictEntityContext const& except, class LocalSpatialEntityFetcher&, class AABB const&, class AABB const& intersectTestBox, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const> view, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>>, struct CollisionShapes&);

    // NOLINTEND
};
