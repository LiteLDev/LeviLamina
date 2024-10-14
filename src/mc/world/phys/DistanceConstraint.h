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
    MCAPI DistanceConstraint(float massA, float massB, float desiredDistance);

    MCAPI float setup(class Vec3 const& posA, class Vec3 const& posB, float baumgarteTerm, float slop);

    MCAPI void solve(class Vec3& velA, class Vec3& velB);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
