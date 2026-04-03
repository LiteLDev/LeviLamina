#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChunkDeletionMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::atomic<int>> mDeleteCount;
    // NOLINTEND
};
