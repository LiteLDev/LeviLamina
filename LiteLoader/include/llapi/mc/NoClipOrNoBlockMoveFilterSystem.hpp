/**
 * @file  NoClipOrNoBlockMoveFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NoClipOrNoBlockMoveFilterSystem.
 *
 */
class NoClipOrNoBlockMoveFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NOCLIPORNOBLOCKMOVEFILTERSYSTEM
public:
    class NoClipOrNoBlockMoveFilterSystem& operator=(class NoClipOrNoBlockMoveFilterSystem const &) = delete;
    NoClipOrNoBlockMoveFilterSystem(class NoClipOrNoBlockMoveFilterSystem const &) = delete;
    NoClipOrNoBlockMoveFilterSystem() = delete;
#endif

public:
    /**
     * @symbol ?create\@NoClipOrNoBlockMoveFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol ?tick\@NoClipOrNoBlockMoveFilterSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@AEBUOffsetsComponent\@\@V?$Optional\@$$CBUSlideOffsetComponent\@\@\@\@AEBUSynchedActorDataComponent\@\@AEAUAABBShapeComponent\@\@AEAUStateVectorComponent\@\@AEAUSubBBsComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void tick(class StrictEntityContext const &, struct MoveRequestComponent const &, struct OffsetsComponent const &, class Optional<struct SlideOffsetComponent const>, struct SynchedActorDataComponent const &, struct AABBShapeComponent &, struct StateVectorComponent &, struct SubBBsComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>, class IConstBlockSource const &);

};
