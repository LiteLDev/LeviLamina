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
     * @hash   -1140505533
     * @symbol  ?beginRope\@RopePoints\@\@QEAAXXZ
     */
    MCAPI void beginRope();
    /**
     * @hash   -688431533
     * @symbol  ?endRope\@RopePoints\@\@QEAAXXZ
     */
    MCAPI void endRope();
    /**
     * @hash   -286130013
     * @symbol  ?freezeInterpolation\@RopePoints\@\@QEAAXXZ
     */
    MCAPI void freezeInterpolation();
    /**
     * @hash   836364564
     * @symbol  ?pushBack\@RopePoints\@\@QEAAXAEBVVec3\@\@\@Z
     */
    MCAPI void pushBack(class Vec3 const &);
    /**
     * @hash   866406537
     * @symbol  ?reserve\@RopePoints\@\@QEAAX_K\@Z
     */
    MCAPI void reserve(unsigned __int64);
    /**
     * @hash   -1925128255
     * @symbol  ?size\@RopePoints\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 size() const;
    /**
     * @hash   957538303
     * @symbol  ??1RopePoints\@\@QEAA\@XZ
     */
    MCAPI ~RopePoints();

};