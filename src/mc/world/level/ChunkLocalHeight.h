#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLocalHeight {

public:
    // prevent constructor by default
    ChunkLocalHeight& operator=(ChunkLocalHeight const&) = delete;
    ChunkLocalHeight(ChunkLocalHeight const&)            = delete;
    ChunkLocalHeight()                                   = delete;
};
