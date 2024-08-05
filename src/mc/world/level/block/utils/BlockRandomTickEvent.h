#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockRandomTickEvent {
public:
    // prevent constructor by default
    BlockRandomTickEvent& operator=(BlockRandomTickEvent const&);
    BlockRandomTickEvent(BlockRandomTickEvent const&);
    BlockRandomTickEvent();

public:
    // NOLINTBEGIN
    MCAPI ~BlockRandomTickEvent();

    // NOLINTEND
};
