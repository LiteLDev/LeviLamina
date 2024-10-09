#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementAttributesComponent {
public:
    // prevent constructor by default
    MovementAttributesComponent& operator=(MovementAttributesComponent const&);
    MovementAttributesComponent(MovementAttributesComponent const&);
    MovementAttributesComponent();

public:
    // NOLINTBEGIN
    MCAPI float getHealth() const;

    MCAPI float getHunger() const;

    MCAPI float getJumpStrength() const;

    MCAPI float getLavaMovementSpeed() const;

    MCAPI float getMovementSpeed() const;

    MCAPI float getUnderwaterMovementSpeed() const;

    MCAPI static std::unordered_map<class HashedString, struct MovementAttributeEntry> const& getAttributeMap();

    // NOLINTEND
};
