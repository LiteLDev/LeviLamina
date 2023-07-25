#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickDelayBlock {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKDELAYBLOCK
public:
    TickDelayBlock& operator=(TickDelayBlock const&) = delete;
    TickDelayBlock(TickDelayBlock const&)            = delete;
    TickDelayBlock()                                 = delete;
#endif

public:
};
