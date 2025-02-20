#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DepthBasedBlockSupplier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2dec1b;
    ::ll::UntypedStorage<8, 8>  mUnkdecfa3;
    // NOLINTEND

public:
    // prevent constructor by default
    DepthBasedBlockSupplier& operator=(DepthBasedBlockSupplier const&);
    DepthBasedBlockSupplier(DepthBasedBlockSupplier const&);
    DepthBasedBlockSupplier();
};
