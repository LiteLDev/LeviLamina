/**
 * @file  DistanceConstraint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DistanceConstraint.
 *
 */
class DistanceConstraint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DISTANCECONSTRAINT
public:
    class DistanceConstraint& operator=(class DistanceConstraint const &) = delete;
    DistanceConstraint(class DistanceConstraint const &) = delete;
    DistanceConstraint() = delete;
#endif

public:
    /**
     * @symbol  ??0DistanceConstraint\@\@QEAA\@MMM\@Z
     */
    MCAPI DistanceConstraint(float, float, float);
    /**
     * @symbol  ?setup\@DistanceConstraint\@\@QEAAMAEBVVec3\@\@0MM\@Z
     */
    MCAPI float setup(class Vec3 const &, class Vec3 const &, float, float);
    /**
     * @symbol  ?solve\@DistanceConstraint\@\@QEAAXAEAVVec3\@\@0\@Z
     */
    MCAPI void solve(class Vec3 &, class Vec3 &);

};