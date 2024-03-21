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
    // symbol:
    // ?forEachBlockInAABB@SpatialQueryUtility@@SA_NAEBVIConstBlockSource@@AEBVAABB@@MAEBV?$function@$$A6AXAEBVBlock@@AEBVBlockPos@@@Z@std@@@Z
    MCAPI static bool
    forEachBlockInAABB(class IConstBlockSource const&, class AABB const&, float, std::function<void(class Block const&, class BlockPos const&)> const&);

    // symbol:
    // ?testForCollidableMobs@SpatialQueryUtility@@SAXAEBVStrictEntityContext@@AEAVLocalSpatialEntityFetcher@@AEBVAABB@@2V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UCollidableMobFlag@@@@@@$$CBUAABBShapeComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UFallingBlockFlag@@@@@@@@AEAUCollisionShapes@@@Z
    MCAPI static void
    testForCollidableMobs(class StrictEntityContext const& except, class LocalSpatialEntityFetcher&, class AABB const&, class AABB const& intersectTestBox, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const> view, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>>, struct CollisionShapes&);

    // symbol:
    // ?testForEntityStacking@SpatialQueryUtility@@SAXAEBVStrictEntityContext@@AEAVLocalSpatialEntityFetcher@@AEBVAABB@@V?$ViewT@VStrictEntityContext@@$$CBUAABBShapeComponent@@$$CBUActorDataFlagComponent@@@@AEAUCollisionShapes@@@Z
    MCAPI static void
    testForEntityStacking(class StrictEntityContext const&, class LocalSpatialEntityFetcher&, class AABB const&, class ViewT<class StrictEntityContext, struct AABBShapeComponent const, struct ActorDataFlagComponent const>, struct CollisionShapes&);

    // symbol:
    // ?tryFetchEntity@SpatialQueryUtility@@SA?AVStrictEntityContext@@AEAVLocalSpatialEntityFetcher@@AEBUActorUniqueID@@@Z
    MCAPI static class StrictEntityContext
    tryFetchEntity(class LocalSpatialEntityFetcher&, struct ActorUniqueID const&);

    // NOLINTEND
};
