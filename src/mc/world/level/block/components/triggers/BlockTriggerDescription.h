#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct BlockTriggerDescription {
public:
    // prevent constructor by default
    BlockTriggerDescription& operator=(BlockTriggerDescription const&);
    BlockTriggerDescription(BlockTriggerDescription const&);
    BlockTriggerDescription();
};
