#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CombatRegenerationComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMBATREGENERATIONCOMPONENT
public:
    CombatRegenerationComponent& operator=(CombatRegenerationComponent const&) = delete;
    CombatRegenerationComponent(CombatRegenerationComponent const&)            = delete;
    CombatRegenerationComponent()                                              = delete;
#endif

public:
    /**
     * @symbol ?tick\@CombatRegenerationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor&);

    // private:
    /**
     * @symbol ?_applyCombatBuffsToMob\@CombatRegenerationComponent\@\@AEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void _applyCombatBuffsToMob(class Actor&, class Actor&);
    /**
     * @symbol ?_getDefinition\@CombatRegenerationComponent\@\@AEBAPEBVCombatRegenerationDefinition\@\@AEAVActor\@\@\@Z
     */
    MCAPI class CombatRegenerationDefinition const* _getDefinition(class Actor&) const;

private:
};
