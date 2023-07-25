#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockSourceDebug {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCEDEBUG
public:
    BlockSourceDebug& operator=(BlockSourceDebug const&) = delete;
    BlockSourceDebug(BlockSourceDebug const&)            = delete;
    BlockSourceDebug()                                   = delete;
#endif

public:
};
