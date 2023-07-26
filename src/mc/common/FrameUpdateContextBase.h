#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FrameUpdateContextBase {

public:
    // prevent constructor by default
    FrameUpdateContextBase& operator=(FrameUpdateContextBase const&) = delete;
    FrameUpdateContextBase(FrameUpdateContextBase const&)            = delete;
    FrameUpdateContextBase()                                         = delete;
};
