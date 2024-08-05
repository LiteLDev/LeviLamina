#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SensingComponent {
public:
    // prevent constructor by default
    SensingComponent& operator=(SensingComponent const&);
    SensingComponent(SensingComponent const&);
    SensingComponent();

public:
    // NOLINTBEGIN
    MCAPI bool canSee(class Mob& owner, class Actor const& target);

    MCAPI void reset();

    MCAPI bool withinFOV(class Mob& owner, class Vec3 const& targetPosition, float fov);

    // NOLINTEND
};
