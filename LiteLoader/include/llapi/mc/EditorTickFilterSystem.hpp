/**
 * @file  EditorTickFilterSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   736718923
     * @symbol ?_addPauseTickNeeded@EditorTickFilterSystem@@SAXAEAVStrictEntityContext@@AEAVActorTickNeededComponent@@AEAV?$EntityModifierT@VEntityRegistryBase@@VStrictEntityContext@@UEditorActorPauseTickNeededComponent@@@@@Z
     */
    MCAPI static void _addPauseTickNeeded(class StrictEntityContext &, class ActorTickNeededComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct EditorActorPauseTickNeededComponent> &);
    /**
     * @hash   -197368896
     * @symbol ?createAddPauseTickNeeded@EditorTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAddPauseTickNeeded();
    /**
     * @hash   -156976198
     * @symbol ?createRemoveActorTickNeeded@EditorTickFilterSystem@@SA?AUTickingSystemWithInfo@@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRemoveActorTickNeeded();

};