#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetBlockHitEvent {
public:
    // prevent constructor by default
    TargetBlockHitEvent& operator=(TargetBlockHitEvent const&);
    TargetBlockHitEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0TargetBlockHitEvent@@QEAA@AEBU0@@Z
    MCAPI TargetBlockHitEvent(struct TargetBlockHitEvent const&);

    // symbol: ??1TargetBlockHitEvent@@QEAA@XZ
    MCAPI ~TargetBlockHitEvent();

    // NOLINTEND
};
