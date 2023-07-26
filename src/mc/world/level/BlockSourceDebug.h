#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockSourceDebug {

public:
    // prevent constructor by default
    BlockSourceDebug& operator=(BlockSourceDebug const&) = delete;
    BlockSourceDebug(BlockSourceDebug const&)            = delete;
    BlockSourceDebug()                                   = delete;
};
