/**
 * @file  MC/TargetPoint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure TargetPoint.
 *
 */
struct TargetPoint {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETPOINT
public:
    struct TargetPoint& operator=(struct TargetPoint const &) = delete;
    TargetPoint(struct TargetPoint const &) = delete;
    TargetPoint() = delete;
#endif

public:
    /**
     * @hash   932713651
     * @symbol ??0TargetPoint@@QEAA@MMMMMM@Z
     */
    MCAPI TargetPoint(float, float, float, float, float, float);

};