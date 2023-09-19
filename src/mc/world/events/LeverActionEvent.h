#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LeverActionEvent {
public:
    // prevent constructor by default
    LeverActionEvent& operator=(LeverActionEvent const&);
    LeverActionEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0LeverActionEvent@@QEAA@AEBU0@@Z
    MCAPI LeverActionEvent(struct LeverActionEvent const&);

    // symbol: ??1LeverActionEvent@@QEAA@XZ
    MCAPI ~LeverActionEvent();

    // NOLINTEND
};
