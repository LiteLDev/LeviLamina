/**
 * @file  MC/DistanceConstraint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1643447637
     * @symbol ??0DistanceConstraint@@QEAA@MMM@Z
     */
    MCAPI DistanceConstraint(float, float, float);
    /**
     * @hash   2036866047
     * @symbol ?setup@DistanceConstraint@@QEAAMAEBVVec3@@0MM@Z
     */
    MCAPI float setup(class Vec3 const &, class Vec3 const &, float, float);
    /**
     * @hash   1378868199
     * @symbol ?solve@DistanceConstraint@@QEAAXAEAVVec3@@0@Z
     */
    MCAPI void solve(class Vec3 &, class Vec3 &);

};