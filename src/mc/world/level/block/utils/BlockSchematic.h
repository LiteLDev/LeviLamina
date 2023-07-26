#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct BlockSchematic {

public:
    // prevent constructor by default
    BlockSchematic& operator=(BlockSchematic const&) = delete;
    BlockSchematic(BlockSchematic const&)            = delete;
    BlockSchematic()                                 = delete;
};

}; // namespace ClientBlockPipeline
