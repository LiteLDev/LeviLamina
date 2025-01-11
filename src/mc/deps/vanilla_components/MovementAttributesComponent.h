#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MovementAttributesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk38babc;
    ::ll::UntypedStorage<4, 8> mUnkd36d3b;
    ::ll::UntypedStorage<4, 8> mUnk5b4b73;
    ::ll::UntypedStorage<4, 8> mUnkdc1796;
    ::ll::UntypedStorage<4, 8> mUnkbebd32;
    ::ll::UntypedStorage<4, 8> mUnkfa5e5d;
    // NOLINTEND

public:
    // prevent constructor by default
    MovementAttributesComponent& operator=(MovementAttributesComponent const&);
    MovementAttributesComponent(MovementAttributesComponent const&);
    MovementAttributesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI float getHealth() const;

    MCAPI float getHunger() const;

    MCAPI float getJumpStrength() const;

    MCAPI float getLavaMovementSpeed() const;

    MCAPI float getMovementSpeed() const;

    MCFOLD float getUnderwaterMovementSpeed() const;
    // NOLINTEND
};
