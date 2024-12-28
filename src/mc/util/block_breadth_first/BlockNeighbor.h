#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BlockBreadthFirst {

struct BlockNeighbor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkba004d;
    ::ll::UntypedStorage<1, 1>  mUnk3b4565;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockNeighbor& operator=(BlockNeighbor const&);
    BlockNeighbor(BlockNeighbor const&);
    BlockNeighbor();
};

} // namespace BlockBreadthFirst
