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
    MCAPI void tick(class Actor& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _applyCombatBuffsToMob(class Actor& owner, class Actor& mob);

    MCAPI class CombatRegenerationDefinition const* _getDefinition(class Actor& actor) const;

    // NOLINTEND
};
