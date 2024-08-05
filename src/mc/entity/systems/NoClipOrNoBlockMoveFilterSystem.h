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
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void
    tick(class StrictEntityContext const&, struct MoveRequestComponent const&, struct OffsetsComponent const&, struct ActorDataFlagComponent const&, struct AABBShapeComponent&, struct StateVectorComponent&, struct SubBBsComponent&, class EntityModifier<struct MoveRequestComponent>, class IConstBlockSource const&);

    // NOLINTEND
};
