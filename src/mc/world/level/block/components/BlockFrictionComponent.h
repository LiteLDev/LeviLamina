#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockFrictionComponent {

public:
    // prevent constructor by default
    BlockFrictionComponent& operator=(BlockFrictionComponent const&) = delete;
    BlockFrictionComponent(BlockFrictionComponent const&)            = delete;
    BlockFrictionComponent()                                         = delete;
};
