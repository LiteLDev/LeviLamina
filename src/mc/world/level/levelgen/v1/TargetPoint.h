#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetPoint {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TARGETPOINT
public:
    TargetPoint& operator=(TargetPoint const&) = delete;
    TargetPoint(TargetPoint const&)            = delete;
    TargetPoint()                              = delete;
#endif

public:
    /**
     * @symbol ??0TargetPoint\@\@QEAA\@MMMMMM\@Z
     */
    MCAPI TargetPoint(float, float, float, float, float, float);
};
