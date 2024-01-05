#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
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
    // ?tick@NoClipOrNoBlockMoveFilterSystem@@SAXAEBVStrictEntityContext@@AEBUMoveRequestComponent@@AEBUOffsetsComponent@@V?$Optional@$$CBUSlideOffsetComponent@@@@AEBUSynchedActorDataComponent@@AEAUAABBShapeComponent@@AEAUStateVectorComponent@@AEAUSubBBsComponent@@V?$EntityModifier@UMoveRequestComponent@@@@AEBVIConstBlockSource@@@Z
    MCAPI static void tick(
        class StrictEntityContext const& context,
        struct MoveRequestComponent const&,
        struct OffsetsComponent const&,
        class Optional<struct SlideOffsetComponent const>,
        struct SynchedActorDataComponent const&,
        struct AABBShapeComponent&   aabb,
        struct StateVectorComponent& state,
        struct SubBBsComponent&,
        class EntityModifier<struct MoveRequestComponent> mod,
        class IConstBlockSource const&                    region
    );

    // NOLINTEND
};
