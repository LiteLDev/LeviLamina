#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/MovementAbilities.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

struct MovementAbilitiesComponent {
public:
    // prevent constructor by default
    MovementAbilitiesComponent& operator=(MovementAbilitiesComponent const&);
    MovementAbilitiesComponent(MovementAbilitiesComponent const&);
    MovementAbilitiesComponent();

public:
    // NOLINTBEGIN
    MCAPI bool getBool(::MovementAbilities ability) const;

    MCAPI float getFlySpeed() const;

    MCAPI void inheritFrom(struct AbilitiesComponent const& abilities);

    MCAPI void setBool(::MovementAbilities ability, bool value);

    MCAPI void setFlySpeed(float newSpeed);

    MCAPI static ::MovementAbilities const getMovementAbilitiesFromAbilitiesIndex(::AbilitiesIndex index);

    // NOLINTEND
};
