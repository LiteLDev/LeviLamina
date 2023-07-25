#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

struct BlockSchematic {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTBLOCKPIPELINE_BLOCKSCHEMATIC
public:
    BlockSchematic& operator=(BlockSchematic const&) = delete;
    BlockSchematic(BlockSchematic const&)            = delete;
    BlockSchematic()                                 = delete;
#endif

public:
};

}; // namespace ClientBlockPipeline
