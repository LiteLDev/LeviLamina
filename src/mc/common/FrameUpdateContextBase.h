#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FrameUpdateContextBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FRAMEUPDATECONTEXTBASE
public:
    FrameUpdateContextBase& operator=(FrameUpdateContextBase const&) = delete;
    FrameUpdateContextBase(FrameUpdateContextBase const&)            = delete;
    FrameUpdateContextBase()                                         = delete;
#endif

public:
};
