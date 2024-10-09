#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct BlockSchematic {
public:
    // prevent constructor by default
    BlockSchematic& operator=(BlockSchematic const&);
    BlockSchematic(BlockSchematic const&);
    BlockSchematic();
};

}; // namespace ClientBlockPipeline
