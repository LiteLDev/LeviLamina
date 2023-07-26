#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockAABBComponentData {

public:
    // prevent constructor by default
    BlockAABBComponentData& operator=(BlockAABBComponentData const&) = delete;
    BlockAABBComponentData(BlockAABBComponentData const&)            = delete;
    BlockAABBComponentData()                                         = delete;
};
