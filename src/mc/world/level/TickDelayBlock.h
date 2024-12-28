#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TickDelayBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbbf85b;
    ::ll::UntypedStorage<8, 8> mUnkd97ff8;
    // NOLINTEND

public:
    // prevent constructor by default
    TickDelayBlock& operator=(TickDelayBlock const&);
    TickDelayBlock(TickDelayBlock const&);
    TickDelayBlock();
};
