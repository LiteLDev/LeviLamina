#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ExhaustionComponent {
public:
    // prevent constructor by default
    ExhaustionComponent& operator=(ExhaustionComponent const&);
    ExhaustionComponent(ExhaustionComponent const&);
    ExhaustionComponent();

public:
    // NOLINTBEGIN
    MCAPI float getAttackValue() const;

    MCAPI float getHealValue() const;

    MCAPI float getJumpValue() const;

    MCAPI float getMiningValue() const;

    MCAPI float getSprintJumpValue() const;

    MCAPI float getSprintValue() const;

    MCAPI float getSwimValue() const;

    MCAPI float getWalkValue() const;

    // NOLINTEND
};
