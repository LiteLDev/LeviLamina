#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockCullingGroup {
public:
    // prevent constructor by default
    BlockCullingGroup& operator=(BlockCullingGroup const&);
    BlockCullingGroup(BlockCullingGroup const&);
    BlockCullingGroup();
};
