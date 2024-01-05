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
    // symbol:
    // ?_addPauseTickNeeded@EditorTickFilterSystem@@SAXAEAVStrictEntityContext@@AEAVActorTickNeededComponent@@AEAV?$EntityModifier@V?$FlagComponent@UEditorActorPauseTickNeededFlag@@@@@@@Z
    MCAPI static void _addPauseTickNeeded(
        class StrictEntityContext& entity,
        class ActorTickNeededComponent&,
        class EntityModifier<class FlagComponent<struct EditorActorPauseTickNeededFlag>>& modifier
    );

    // symbol:
    // ?_tickAddPauseTickNeeded@EditorTickFilterSystem@@SAXV?$ViewT@VStrictEntityContext@@U?$Include@V?$FlagComponent@UEditorActorPausedFlag@@@@@@VActorTickNeededComponent@@@@V?$EntityModifier@V?$FlagComponent@UEditorActorPauseTickNeededFlag@@@@@@@Z
    MCAPI static void _tickAddPauseTickNeeded(
        class ViewT<
            class StrictEntityContext,
            struct Include<class FlagComponent<struct EditorActorPausedFlag>>,
            class ActorTickNeededComponent>                                              view,
        class EntityModifier<class FlagComponent<struct EditorActorPauseTickNeededFlag>> modifier
    );

    // symbol: ?createAddPauseTickNeeded@EditorTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createAddPauseTickNeeded();

    // symbol: ?createRemoveActorTickNeeded@EditorTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createRemoveActorTickNeeded();

    // NOLINTEND
};
