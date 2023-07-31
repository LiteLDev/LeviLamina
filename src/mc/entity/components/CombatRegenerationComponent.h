#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CombatRegenerationComponent {

public:
    // prevent constructor by default
    CombatRegenerationComponent& operator=(CombatRegenerationComponent const&) = delete;
    CombatRegenerationComponent(CombatRegenerationComponent const&)            = delete;
    CombatRegenerationComponent()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?tick\@CombatRegenerationComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor&);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_applyCombatBuffsToMob\@CombatRegenerationComponent\@\@AEAAXAEAVActor\@\@0\@Z
     */
    MCAPI void _applyCombatBuffsToMob(class Actor&, class Actor&);
    /**
     * @symbol ?_getDefinition\@CombatRegenerationComponent\@\@AEBAPEBVCombatRegenerationDefinition\@\@AEAVActor\@\@\@Z
     */
    MCAPI class CombatRegenerationDefinition const* _getDefinition(class Actor&) const;
    // NOLINTEND
};
