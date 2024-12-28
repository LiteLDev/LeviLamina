#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkPositionComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk324ca4;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkPositionComponent& operator=(ChunkPositionComponent const&);
    ChunkPositionComponent(ChunkPositionComponent const&);
    ChunkPositionComponent();
};
