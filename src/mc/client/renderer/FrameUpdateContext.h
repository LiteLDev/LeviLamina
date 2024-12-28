#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FrameUpdateContext {
public:
    // prevent constructor by default
    FrameUpdateContext& operator=(FrameUpdateContext const&);
    FrameUpdateContext(FrameUpdateContext const&);
    FrameUpdateContext();
};
