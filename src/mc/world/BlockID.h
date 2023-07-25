#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockID {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKID
public:
    BlockID& operator=(BlockID const&) = delete;
    BlockID(BlockID const&)            = delete;
    BlockID()                          = delete;
#endif

public:
};
