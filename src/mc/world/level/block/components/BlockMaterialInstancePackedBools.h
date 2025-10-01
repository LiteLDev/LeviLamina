#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMaterialInstancePackedBools {
public:
    // member variables
    // NOLINTBEGIN
    bool mUnk69783e : 1;
    bool mUnk2d3038 : 1;
    bool mUnk824bf7 : 1;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMaterialInstancePackedBools& operator=(BlockMaterialInstancePackedBools const&);
    BlockMaterialInstancePackedBools(BlockMaterialInstancePackedBools const&);
    BlockMaterialInstancePackedBools();
};
