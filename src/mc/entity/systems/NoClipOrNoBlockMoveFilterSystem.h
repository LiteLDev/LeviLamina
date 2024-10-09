#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

class NoClipOrNoBlockMoveFilterSystem {
public:
    // prevent constructor by default
    NoClipOrNoBlockMoveFilterSystem& operator=(NoClipOrNoBlockMoveFilterSystem const&);
    NoClipOrNoBlockMoveFilterSystem(NoClipOrNoBlockMoveFilterSystem const&);
    NoClipOrNoBlockMoveFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static struct TickingSystemWithInfo create();

    MCAPI static void tick(
        class StrictEntityContext const&                  context,
        struct MoveRequestComponent const&                moveRequest,
        struct OffsetsComponent const&                    offsets,
        struct ActorDataFlagComponent const&              actorData,
        struct AABBShapeComponent&                        aabb,
        struct StateVectorComponent&                      state,
        struct SubBBsComponent&                           subBBs,
        class EntityModifier<struct MoveRequestComponent> mod,
        class IConstBlockSource const&                    region
    );

    // NOLINTEND
};
