#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class BlockVirtualization {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8f3f3d;
    ::ll::UntypedStorage<8, 8> mUnk8b7008;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockVirtualization& operator=(BlockVirtualization const&);
    BlockVirtualization(BlockVirtualization const&);
    BlockVirtualization();
};

} // namespace SFAT
