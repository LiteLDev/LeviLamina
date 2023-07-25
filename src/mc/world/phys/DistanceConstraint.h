#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DistanceConstraint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISTANCECONSTRAINT
public:
    DistanceConstraint& operator=(DistanceConstraint const&) = delete;
    DistanceConstraint(DistanceConstraint const&)            = delete;
    DistanceConstraint()                                     = delete;
#endif

public:
    /**
     * @symbol ??0DistanceConstraint\@\@QEAA\@MMM\@Z
     */
    MCAPI DistanceConstraint(float, float, float);
    /**
     * @symbol ?setup\@DistanceConstraint\@\@QEAAMAEBVVec3\@\@0MM\@Z
     */
    MCAPI float setup(class Vec3 const&, class Vec3 const&, float, float);
    /**
     * @symbol ?solve\@DistanceConstraint\@\@QEAAXAEAVVec3\@\@0\@Z
     */
    MCAPI void solve(class Vec3&, class Vec3&);
};
