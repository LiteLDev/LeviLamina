#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

struct WeightedRandomBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9bba29;
    ::ll::UntypedStorage<4, 4> mUnk2e0875;
    // NOLINTEND

public:
    // prevent constructor by default
    WeightedRandomBlock& operator=(WeightedRandomBlock const&);
    WeightedRandomBlock(WeightedRandomBlock const&);
    WeightedRandomBlock();
};

} // namespace Editor
