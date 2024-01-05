#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CombatRegenerationComponent {
public:
    // prevent constructor by default
    CombatRegenerationComponent& operator=(CombatRegenerationComponent const&);
    CombatRegenerationComponent(CombatRegenerationComponent const&);
    CombatRegenerationComponent();

public:
    // NOLINTBEGIN
    // symbol: ?tick@CombatRegenerationComponent@@QEAAXAEAVActor@@@Z
    MCAPI void tick(class Actor& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_applyCombatBuffsToMob@CombatRegenerationComponent@@AEAAXAEAVActor@@0@Z
    MCAPI void _applyCombatBuffsToMob(class Actor& owner, class Actor& mob);

    // symbol: ?_getDefinition@CombatRegenerationComponent@@AEBAPEBVCombatRegenerationDefinition@@AEAVActor@@@Z
    MCAPI class CombatRegenerationDefinition const* _getDefinition(class Actor& actor) const;

    // NOLINTEND
};
