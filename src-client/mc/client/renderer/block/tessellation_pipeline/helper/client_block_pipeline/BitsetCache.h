#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct BitsetCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1000, ::std::bitset<8000>> mBitSet;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reset();
    // NOLINTEND
};

} // namespace ClientBlockPipeline
