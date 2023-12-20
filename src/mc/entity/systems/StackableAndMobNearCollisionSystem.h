#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/Optional.h"
#include "mc/common/wrapper/OptionalGlobal.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/world/components/FlagComponent.h"

class StackableAndMobNearCollisionSystem {
public:
    // prevent constructor by default
    StackableAndMobNearCollisionSystem& operator=(StackableAndMobNearCollisionSystem const&);
    StackableAndMobNearCollisionSystem(StackableAndMobNearCollisionSystem const&);
    StackableAndMobNearCollisionSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@StackableAndMobNearCollisionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?tick@StackableAndMobNearCollisionSystem@@SAXV?$ViewT@VStrictEntityContext@@$$CBUAABBShapeComponent@@$$CBUDimensionTypeComponent@@$$CBUSynchedActorDataComponent@@V?$Optional@$$CBV?$FlagComponent@UCollidableMobNearFlag@@@@@@UMoveRequestComponent@@@@V?$ViewT@VStrictEntityContext@@$$CBUAABBShapeComponent@@$$CBUSynchedActorDataComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UCollidableMobFlag@@@@@@$$CBUAABBShapeComponent@@@@V?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UFallingBlockFlag@@@@@@@@V?$OptionalGlobal@ULocalSpatialEntityFetcherFactoryComponent@@@@@Z
    MCAPI static void
        tick(class ViewT<class StrictEntityContext, struct AABBShapeComponent const, struct DimensionTypeComponent const, struct SynchedActorDataComponent const, class Optional<class FlagComponent<struct CollidableMobNearFlag> const>, struct MoveRequestComponent>, class ViewT<class StrictEntityContext, struct AABBShapeComponent const, struct SynchedActorDataComponent const>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct CollidableMobFlag>>, struct AABBShapeComponent const>, class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct FallingBlockFlag>>>, class OptionalGlobal<struct LocalSpatialEntityFetcherFactoryComponent>);

    // NOLINTEND
};
