#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XAsyncBlock {
public:
    // prevent constructor by default
    XAsyncBlock& operator=(XAsyncBlock const&);
    XAsyncBlock(XAsyncBlock const&);
    XAsyncBlock();
};
