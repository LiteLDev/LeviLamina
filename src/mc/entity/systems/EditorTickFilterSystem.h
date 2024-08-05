#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifier.h"
#include "mc/world/components/FlagComponent.h"

class EditorTickFilterSystem {
public:
    // prevent constructor by default
    EditorTickFilterSystem& operator=(EditorTickFilterSystem const&);
    EditorTickFilterSystem(EditorTickFilterSystem const&);
    EditorTickFilterSystem();

public:
    // NOLINTBEGIN
    MCAPI static void _addPauseTickNeeded(
        class StrictEntityContext& entity,
        class ActorTickNeededComponent&,
        class EntityModifier<class FlagComponent<struct EditorActorPauseTickNeededFlag>>& modifier
    );

    MCAPI static void _tickAddPauseTickNeeded(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct EditorActorPausedFlag>>,
            class ActorTickNeededComponent>                                              view,
        class EntityModifier<class FlagComponent<struct EditorActorPauseTickNeededFlag>> modifier
    );

    MCAPI static struct TickingSystemWithInfo createAddPauseTickNeeded();

    MCAPI static struct TickingSystemWithInfo createRemoveActorTickNeeded();

    // NOLINTEND
};
