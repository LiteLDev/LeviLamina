#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"
#include "mc/enums/MovementAbilities.h"

struct MovementAbilitiesComponent {
public:
    // prevent constructor by default
    MovementAbilitiesComponent& operator=(MovementAbilitiesComponent const&);
    MovementAbilitiesComponent(MovementAbilitiesComponent const&);
    MovementAbilitiesComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getBool@MovementAbilitiesComponent@@QEBA_NW4MovementAbilities@@@Z
    MCAPI bool getBool(::MovementAbilities) const;

    // symbol: ?getFlySpeed@MovementAbilitiesComponent@@QEBAMXZ
    MCAPI float getFlySpeed() const;

    // symbol: ?inheritFrom@MovementAbilitiesComponent@@QEAAXAEBUAbilitiesComponent@@@Z
    MCAPI void inheritFrom(struct AbilitiesComponent const&);

    // symbol: ?setBool@MovementAbilitiesComponent@@QEAAXW4MovementAbilities@@_N@Z
    MCAPI void setBool(::MovementAbilities, bool);

    // symbol: ?setFlySpeed@MovementAbilitiesComponent@@QEAAXM@Z
    MCAPI void setFlySpeed(float);

    // symbol:
    // ?getMovementAbilitiesFromAbilitiesIndex@MovementAbilitiesComponent@@SA?BW4MovementAbilities@@W4AbilitiesIndex@@@Z
    MCAPI static ::MovementAbilities const getMovementAbilitiesFromAbilitiesIndex(::AbilitiesIndex);

    // NOLINTEND
};
