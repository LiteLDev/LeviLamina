#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

class NetworkBlockPosition : public BlockPos {
public:
    using BlockPos::BlockPos;
};
