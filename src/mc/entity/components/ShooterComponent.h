#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShooterComponent {
public:
    // prevent constructor by default
    ShooterComponent& operator=(ShooterComponent const&);
    ShooterComponent(ShooterComponent const&);
    ShooterComponent();

public:
    // NOLINTBEGIN
    MCAPI ShooterComponent(class ShooterComponent&&);

    MCAPI bool hasMagicAttacks() const;

    MCAPI void onShoot(class Actor& owner);

    MCAPI class ShooterComponent& operator=(class ShooterComponent&&);

    MCAPI ~ShooterComponent();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _shootProjectile(class Actor& owner, struct ActorDefinitionIdentifier const&, int auxVal);

    // NOLINTEND
};
