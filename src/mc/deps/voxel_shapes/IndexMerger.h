#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace VoxelShapes {

class IndexMerger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9ef562;
    ::ll::UntypedStorage<8, 64> mUnk914bd0;
    // NOLINTEND

public:
    // prevent constructor by default
    IndexMerger& operator=(IndexMerger const&);
    IndexMerger(IndexMerger const&);
    IndexMerger();
};

} // namespace VoxelShapes
