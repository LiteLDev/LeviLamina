#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPatternPostEvent {
public:
    // prevent constructor by default
    BlockPatternPostEvent& operator=(BlockPatternPostEvent const&);
    BlockPatternPostEvent(BlockPatternPostEvent const&);
    BlockPatternPostEvent();

public:
    // NOLINTBEGIN
    MCAPI ~BlockPatternPostEvent();

    // NOLINTEND
};
