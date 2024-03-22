#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

class NoClipOrNoBlockMoveFilterSystem {
public:
    // prevent constructor by default
    NoClipOrNoBlockMoveFilterSystem& operator=(NoClipOrNoBlockMoveFilterSystem const&);
    NoClipOrNoBlockMoveFilterSystem(NoClipOrNoBlockMoveFilterSystem const&);
    NoClipOrNoBlockMoveFilterSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@NoClipOrNoBlockMoveFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol:
    // ?tick@NoClipOrNoBlockMoveFilterSystem@@SAXAEBVStrictEntityContext@@AEBUMoveRequestComponent@@AEBUOffsetsComponent@@AEBUActorDataFlagComponent@@AEAUAABBShapeComponent@@AEAUStateVectorComponent@@AEAUSubBBsComponent@@V?$EntityModifier@UMoveRequestComponent@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void
    tick(class StrictEntityContext const&, struct MoveRequestComponent const&, struct OffsetsComponent const&, struct ActorDataFlagComponent const&, struct AABBShapeComponent&, struct StateVectorComponent&, struct SubBBsComponent&, class EntityModifier<struct MoveRequestComponent>, class IConstBlockSource const&);

    // NOLINTEND
};
