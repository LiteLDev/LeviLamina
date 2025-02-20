#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockAnimateTickData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkd6c0fa;
    ::ll::UntypedStorage<8, 8>  mUnkfd1e24;
    ::ll::UntypedStorage<8, 8>  mUnk277d58;
    ::ll::UntypedStorage<8, 8>  mUnkb4c2dc;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockAnimateTickData& operator=(BlockAnimateTickData const&);
    BlockAnimateTickData(BlockAnimateTickData const&);
    BlockAnimateTickData();
};
