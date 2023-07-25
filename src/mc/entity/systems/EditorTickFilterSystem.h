#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/entity/EntityModifierT.h"
#include "mc/world/components/FlagComponent.h"

class EditorTickFilterSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITORTICKFILTERSYSTEM
public:
    EditorTickFilterSystem& operator=(EditorTickFilterSystem const&) = delete;
    EditorTickFilterSystem(EditorTickFilterSystem const&)            = delete;
    EditorTickFilterSystem()                                         = delete;
#endif

public:
    /**
     * @symbol
     * ?_addPauseTickNeeded\@EditorTickFilterSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorTickNeededComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UEditorActorPauseTickNeededFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
    _addPauseTickNeeded(class StrictEntityContext&, class ActorTickNeededComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct EditorActorPauseTickNeededFlag>>&);
    /**
     * @symbol
     * ?_tickAddPauseTickNeeded\@EditorTickFilterSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UEditorActorPausedFlag\@\@\@\@\@\@VActorTickNeededComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UEditorActorPauseTickNeededFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void
        _tickAddPauseTickNeeded(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct EditorActorPausedFlag>>, class ActorTickNeededComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct EditorActorPauseTickNeededFlag>>);
    /**
     * @symbol ?createAddPauseTickNeeded\@EditorTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAddPauseTickNeeded();
    /**
     * @symbol ?createRemoveActorTickNeeded\@EditorTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRemoveActorTickNeeded();
};
