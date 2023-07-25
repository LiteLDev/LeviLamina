#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XAsyncBlock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XASYNCBLOCK
public:
    XAsyncBlock& operator=(XAsyncBlock const&) = delete;
    XAsyncBlock(XAsyncBlock const&)            = delete;
    XAsyncBlock()                              = delete;
#endif

public:
};
