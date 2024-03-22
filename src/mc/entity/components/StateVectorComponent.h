#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StateVectorComponent {
public:
    // prevent constructor by default
    StateVectorComponent(StateVectorComponent const&);
    StateVectorComponent();

public:
    // NOLINTBEGIN
    // symbol: ??4StateVectorComponent@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct StateVectorComponent& operator=(struct StateVectorComponent const&);

    // symbol: ?ABS_LIMIT@StateVectorComponent@@2VVec3@@B
    MCAPI static class Vec3 const ABS_LIMIT;

    // NOLINTEND
};
