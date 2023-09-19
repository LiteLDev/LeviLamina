#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPatternEvent {
public:
    // prevent constructor by default
    BlockPatternEvent& operator=(BlockPatternEvent const&);
    BlockPatternEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockPatternEvent@@QEAA@AEBU0@@Z
    MCAPI BlockPatternEvent(struct BlockPatternEvent const&);

    // symbol: ??1BlockPatternEvent@@QEAA@XZ
    MCAPI ~BlockPatternEvent();

    // NOLINTEND
};
