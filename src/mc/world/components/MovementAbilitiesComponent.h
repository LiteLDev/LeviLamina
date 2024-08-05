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
    MCAPI bool getBool(::MovementAbilities) const;

    MCAPI float getFlySpeed() const;

    MCAPI void inheritFrom(struct AbilitiesComponent const&);

    MCAPI void setBool(::MovementAbilities, bool);

    MCAPI void setFlySpeed(float);

    MCAPI static ::MovementAbilities const getMovementAbilitiesFromAbilitiesIndex(::AbilitiesIndex);

    // NOLINTEND
};
