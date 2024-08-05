#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPatternEvent {
public:
    // prevent constructor by default
    BlockPatternEvent& operator=(BlockPatternEvent const&);
    BlockPatternEvent();

public:
    // NOLINTBEGIN
    MCAPI BlockPatternEvent(struct BlockPatternEvent const&);

    MCAPI ~BlockPatternEvent();

    // NOLINTEND
};
