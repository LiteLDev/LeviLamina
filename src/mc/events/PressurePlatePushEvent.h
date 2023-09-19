#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PressurePlatePushEvent {
public:
    // prevent constructor by default
    PressurePlatePushEvent& operator=(PressurePlatePushEvent const&);
    PressurePlatePushEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0PressurePlatePushEvent@@QEAA@AEBU0@@Z
    MCAPI PressurePlatePushEvent(struct PressurePlatePushEvent const&);

    // symbol: ??1PressurePlatePushEvent@@QEAA@XZ
    MCAPI ~PressurePlatePushEvent();

    // NOLINTEND
};
