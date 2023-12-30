#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DistanceConstraint {
public:
    // prevent constructor by default
    DistanceConstraint& operator=(DistanceConstraint const&);
    DistanceConstraint(DistanceConstraint const&);
    DistanceConstraint();

public:
    // NOLINTBEGIN
    // symbol: ??0DistanceConstraint@@QEAA@MMM@Z
    MCAPI DistanceConstraint(float massA, float massB, float desiredDistance);

    // symbol: ?setup@DistanceConstraint@@QEAAMAEBVVec3@@0MM@Z
    MCAPI float setup(class Vec3 const& posA, class Vec3 const& posB, float baumgarteTerm, float slop);

    // symbol: ?solve@DistanceConstraint@@QEAAXAEAVVec3@@0@Z
    MCAPI void solve(class Vec3& velA, class Vec3& velB);

    // NOLINTEND
};
