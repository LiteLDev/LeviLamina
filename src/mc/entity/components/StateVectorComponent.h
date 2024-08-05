#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StateVectorComponent {
public:
    // prevent constructor by default
    StateVectorComponent(StateVectorComponent const&);
    StateVectorComponent();

public:
    // NOLINTBEGIN
    MCAPI struct StateVectorComponent& operator=(struct StateVectorComponent const&);

    MCAPI static class Vec3 const ABS_LIMIT;

    // NOLINTEND
};
