/**
 * @file  CombatRegenerationComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CombatRegenerationComponent.
 *
 */
class CombatRegenerationComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMBATREGENERATIONCOMPONENT
public:
    class CombatRegenerationComponent& operator=(class CombatRegenerationComponent const &) = delete;
    CombatRegenerationComponent(class CombatRegenerationComponent const &) = delete;
    CombatRegenerationComponent() = delete;
#endif

public:
    /**
     * @symbol  ?tick\@CombatRegenerationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor &);

//private:
    /**
     * @symbol  ?_applyCombatBuffsToMob\@CombatRegenerationComponent\@\@AEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void _applyCombatBuffsToMob(class Actor &, class Actor &);
    /**
     * @symbol  ?_getDefinition\@CombatRegenerationComponent\@\@AEBAPEBVCombatRegenerationDefinition\@\@AEAVActor\@\@\@Z
     */
    MCAPI class CombatRegenerationDefinition const * _getDefinition(class Actor &) const;

private:

};