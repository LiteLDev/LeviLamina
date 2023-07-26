#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Optional.h"
#include "mc/entity/EntityModifierT.h"

class NoClipOrNoBlockMoveFilterSystem {

public:
    // prevent constructor by default
    NoClipOrNoBlockMoveFilterSystem& operator=(NoClipOrNoBlockMoveFilterSystem const&) = delete;
    NoClipOrNoBlockMoveFilterSystem(NoClipOrNoBlockMoveFilterSystem const&)            = delete;
    NoClipOrNoBlockMoveFilterSystem()                                                  = delete;

public:
    /**
     * @symbol ?create\@NoClipOrNoBlockMoveFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
    /**
     * @symbol
     * ?tick\@NoClipOrNoBlockMoveFilterSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@AEBUOffsetsComponent\@\@V?$Optional\@$$CBUSlideOffsetComponent\@\@\@\@AEBUSynchedActorDataComponent\@\@AEAUAABBShapeComponent\@\@AEAUStateVectorComponent\@\@AEAUSubBBsComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tick(class StrictEntityContext const&, struct MoveRequestComponent const&, struct OffsetsComponent const&, class Optional<struct SlideOffsetComponent const>, struct SynchedActorDataComponent const&, struct AABBShapeComponent&, struct StateVectorComponent&, struct SubBBsComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>, class IConstBlockSource const&); // NOLINT
};
