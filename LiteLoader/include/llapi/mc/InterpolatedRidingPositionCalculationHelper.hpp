/**
 * @file  InterpolatedRidingPositionCalculationHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct InterpolatedRidingPositionCalculationHelper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERPOLATEDRIDINGPOSITIONCALCULATIONHELPER
public:
    struct InterpolatedRidingPositionCalculationHelper& operator=(struct InterpolatedRidingPositionCalculationHelper const &) = delete;
    InterpolatedRidingPositionCalculationHelper(struct InterpolatedRidingPositionCalculationHelper const &) = delete;
    InterpolatedRidingPositionCalculationHelper() = delete;
#endif

public:
    /**
     * @symbol ?BASE_OFFSET\@InterpolatedRidingPositionCalculationHelper\@\@2VVec3\@\@B
     */
    MCAPI static class Vec3 const BASE_OFFSET;
    /**
     * @symbol ?getCamelInterpolatedRidingOffset\@InterpolatedRidingPositionCalculationHelper\@\@SA?AVVec3\@\@_N\@Z
     */
    MCAPI static class Vec3 getCamelInterpolatedRidingOffset(bool);

};