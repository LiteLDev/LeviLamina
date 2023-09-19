#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FrameUpdateContextBase {
public:
    // prevent constructor by default
    FrameUpdateContextBase& operator=(FrameUpdateContextBase const&);
    FrameUpdateContextBase(FrameUpdateContextBase const&);
    FrameUpdateContextBase();
};
