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
    // symbol: ?getAttackValue@ExhaustionComponent@@QEBAMXZ
    MCAPI float getAttackValue() const;

    // symbol: ?getHealValue@ExhaustionComponent@@QEBAMXZ
    MCAPI float getHealValue() const;

    // symbol: ?getJumpValue@ExhaustionComponent@@QEBAMXZ
    MCAPI float getJumpValue() const;

    // symbol: ?getMiningValue@ExhaustionComponent@@QEBAMXZ
    MCAPI float getMiningValue() const;

    // symbol: ?getSprintJumpValue@ExhaustionComponent@@QEBAMXZ
    MCAPI float getSprintJumpValue() const;

    // symbol: ?getSprintValue@ExhaustionComponent@@QEBAMXZ
    MCAPI float getSprintValue() const;

    // symbol: ?getSwimValue@ExhaustionComponent@@QEBAMXZ
    MCAPI float getSwimValue() const;

    // symbol: ?getWalkValue@ExhaustionComponent@@QEBAMXZ
    MCAPI float getWalkValue() const;

    // NOLINTEND
};
