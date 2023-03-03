/**
 * @file  EditorTickFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EditorTickFilterSystem.
 *
 */
class EditorTickFilterSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITORTICKFILTERSYSTEM
public:
    class EditorTickFilterSystem& operator=(class EditorTickFilterSystem const &) = delete;
    EditorTickFilterSystem(class EditorTickFilterSystem const &) = delete;
    EditorTickFilterSystem() = delete;
#endif

public:
    /**
     * @symbol  ?_addPauseTickNeeded\@EditorTickFilterSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorTickNeededComponent\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UEditorActorPauseTickNeededFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void _addPauseTickNeeded(class StrictEntityContext &, class ActorTickNeededComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct EditorActorPauseTickNeededFlag>> &);
    /**
     * @symbol  ?createAddPauseTickNeeded\@EditorTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAddPauseTickNeeded();
    /**
     * @symbol  ?createRemoveActorTickNeeded\@EditorTickFilterSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRemoveActorTickNeeded();

};