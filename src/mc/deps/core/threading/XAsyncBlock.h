#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct XAsyncBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke13cd3;
    ::ll::UntypedStorage<8, 8>  mUnk46d6d8;
    ::ll::UntypedStorage<8, 8>  mUnkc51bad;
    ::ll::UntypedStorage<1, 32> mUnk269a2d;
    // NOLINTEND

public:
    // prevent constructor by default
    XAsyncBlock& operator=(XAsyncBlock const&);
    XAsyncBlock(XAsyncBlock const&);
    XAsyncBlock();
};
