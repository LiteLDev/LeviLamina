/**
 * @file  RopePoints.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class RopePoints.
 *
 */
class RopePoints {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPEPOINTS
public:
    class RopePoints& operator=(class RopePoints const &) = delete;
    RopePoints(class RopePoints const &) = delete;
    RopePoints() = delete;
#endif

public:
    /**
     * @symbol  ?beginRope\@RopePoints\@\@QEAAXXZ
     */
    MCAPI void beginRope();
    /**
     * @symbol  ?endRope\@RopePoints\@\@QEAAXXZ
     */
    MCAPI void endRope();
    /**
     * @symbol  ?freezeInterpolation\@RopePoints\@\@QEAAXXZ
     */
    MCAPI void freezeInterpolation();
    /**
     * @symbol  ?pushBack\@RopePoints\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void pushBack(class Vec3 const &);
    /**
     * @symbol  ?reserve\@RopePoints\@\@QEAAX_K\@Z
     */
    MCAPI void reserve(unsigned __int64);
    /**
     * @symbol  ?size\@RopePoints\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @symbol  ??1RopePoints\@\@QEAA\@XZ
     */
    MCAPI ~RopePoints();

};