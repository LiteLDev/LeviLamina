#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkPositionComponent {

public:
    // prevent constructor by default
    ChunkPositionComponent& operator=(ChunkPositionComponent const&) = delete;
    ChunkPositionComponent(ChunkPositionComponent const&)            = delete;
    ChunkPositionComponent()                                         = delete;
};
