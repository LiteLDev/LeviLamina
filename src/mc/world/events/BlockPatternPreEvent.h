#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPatternPreEvent {
public:
    // prevent constructor by default
    BlockPatternPreEvent& operator=(BlockPatternPreEvent const&);
    BlockPatternPreEvent(BlockPatternPreEvent const&);
    BlockPatternPreEvent();

public:
    // NOLINTBEGIN
    MCAPI ~BlockPatternPreEvent();

    // NOLINTEND
};
