#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/entity/components/FlagComponent.h"

namespace ActorPostAiStep {
// NOLINTBEGIN
MCAPI void _tickEach(
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>,
        struct Exclude<class FlagComponent<struct ActorRemovedFlag>>,
        class ActorOwnerComponent> commonView,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct EnderDragonFlag>>> const&
                                                                                                          enderDragons,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct HorseFlag>>> const&  horses,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct ParrotFlag>>> const& parrots,
    class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct SquidFlag>>> const&  squids,
    class ViewT<
        class StrictEntityContext,
        struct Include<class FlagComponent<struct WitherBossFlag>>,
        struct WitherBossPreAIStepResultComponent const> withers
);
// NOLINTEND

}; // namespace ActorPostAiStep
