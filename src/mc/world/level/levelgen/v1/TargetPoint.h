#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetPoint {

public:
    // prevent constructor by default
    TargetPoint& operator=(TargetPoint const&) = delete;
    TargetPoint(TargetPoint const&)            = delete;
    TargetPoint()                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0TargetPoint\@\@QEAA\@MMMMMM\@Z
     */
    MCAPI TargetPoint(float, float, float, float, float, float);
    // NOLINTEND
};
