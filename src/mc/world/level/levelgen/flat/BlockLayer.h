#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockLayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk1ebe98;
    ::ll::UntypedStorage<4, 4> mUnkdbadf3;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockLayer& operator=(BlockLayer const&);
    BlockLayer(BlockLayer const&);
    BlockLayer();
};
