#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DistanceConstraint {

public:
    // prevent constructor by default
    DistanceConstraint& operator=(DistanceConstraint const&) = delete;
    DistanceConstraint(DistanceConstraint const&)            = delete;
    DistanceConstraint()                                     = delete;

public:
    /**
     * @symbol ??0DistanceConstraint\@\@QEAA\@MMM\@Z
     */
    MCAPI DistanceConstraint(float, float, float); // NOLINT
    /**
     * @symbol ?setup\@DistanceConstraint\@\@QEAAMAEBVVec3\@\@0MM\@Z
     */
    MCAPI float setup(class Vec3 const&, class Vec3 const&, float, float); // NOLINT
    /**
     * @symbol ?solve\@DistanceConstraint\@\@QEAAXAEAVVec3\@\@0\@Z
     */
    MCAPI void solve(class Vec3&, class Vec3&); // NOLINT
};
